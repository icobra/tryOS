# prepare image folder
rm -rf image
mkdir image
cd image
mkdir -p dev
mknod dev/console c 5 1
cd ..

# building code
cd src
mkdir -p build
for i in `ls *.c`; do
  gcc -m32 $i -static -o build/${i%.c}
  cp build/${i%.c} ../image/
  chown root ../image/${i%.c}
done
cd ..

# creating filesystem
rm initrd*
cd image
find . | cpio -H newc -o > ../initrd
cd ..
gzip initrd

