# OS

## OSの定義

OS(オペレーティングシステム)という単語の意味は、明確に定義されているわけではありません。

Linuxに限って言えば、以下のようなパッケージの集合がOSであるとみなされています。

- シェル(Bash, ash, csh, tcsh, zsh, ...)
- util-linux
- procps
- GNU coreutils
- GNU grep, findutils, diffutils
- GNU libc
- 各種基本ライブラリ
- 開発環境
- X Window System
- GNOME, KDE

## ディストリビューション

我々が「Linux」として扱っているプログラムは、**ディストリビューション**と呼ばれています。

ディストリビューションには以下の種類があります。

- Red Hat
- CentOS
- Ubuntu
- Debian
- etc...

ちなみに、MacOSはUNIXから派生してできたOSです。

## カーネル

カーネルとは、OSの核(Kernel)のことです。

このカーネルこそが本書の主題です。

厳密には、「Linux」というとカーネルのことを指します。

（OSではありません）

## システムコール

**システムコール**とは、カーネルとやりとりするための仕組みです。

システム( = System = Kernel)を呼び出す( = call)から「システムコール」と呼ばれます。

システムコールの例は以下の通りです。

- open
- read
- write
- fork
- exec
- stat
- unlink

このシステムコールこそがLinuxカーネルの核心です。
