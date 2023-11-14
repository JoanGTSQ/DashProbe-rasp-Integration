{ pkgs }: {
	deps = [
   pkgs.qt4
		pkgs.clang_14
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}