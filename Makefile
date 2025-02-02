#############################################################################
# Makefile for building: bnc
# Generated by qmake (2.01a) (Qt 4.8.7) on: ??. ?.?. 20 11:41:07 2019
# Project:  bnc.pro
# Template: subdirs
# Command: /usr/local/Trolltech/Qt-4.8.7/bin/qmake -o Makefile bnc.pro
#############################################################################

first: make_default
MAKEFILE      = Makefile
QMAKE         = /usr/local/Trolltech/Qt-4.8.7/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
SUBTARGETS    =  \
		sub-newmat \
		sub-qwt \
		sub-qwtpolar \
		sub-src

newmat/$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) newmat/ || $(MKDIR) newmat/ 
	cd newmat/ && $(QMAKE) /home/skycaptain/gnss/develope/BNC_2.12.7_V4/newmat/newmat.pro -o $(MAKEFILE)
sub-newmat-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) newmat/ || $(MKDIR) newmat/ 
	cd newmat/ && $(QMAKE) /home/skycaptain/gnss/develope/BNC_2.12.7_V4/newmat/newmat.pro -o $(MAKEFILE)
sub-newmat: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE)
sub-newmat-make_default-ordered: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) 
sub-newmat-make_default: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) 
sub-newmat-make_first-ordered: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) first
sub-newmat-make_first: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) first
sub-newmat-all-ordered: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) all
sub-newmat-all: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) all
sub-newmat-clean-ordered: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) clean
sub-newmat-clean: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) clean
sub-newmat-distclean-ordered: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) distclean
sub-newmat-distclean: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) distclean
sub-newmat-install_subtargets-ordered: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) install
sub-newmat-install_subtargets: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) install
sub-newmat-uninstall_subtargets-ordered: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) uninstall
sub-newmat-uninstall_subtargets: newmat/$(MAKEFILE) FORCE
	cd newmat/ && $(MAKE) -f $(MAKEFILE) uninstall
qwt/$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) qwt/ || $(MKDIR) qwt/ 
	cd qwt/ && $(QMAKE) /home/skycaptain/gnss/develope/BNC_2.12.7_V4/qwt/qwt.pro -o $(MAKEFILE)
sub-qwt-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) qwt/ || $(MKDIR) qwt/ 
	cd qwt/ && $(QMAKE) /home/skycaptain/gnss/develope/BNC_2.12.7_V4/qwt/qwt.pro -o $(MAKEFILE)
sub-qwt: qwt/$(MAKEFILE) FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE)
sub-qwt-make_default-ordered: qwt/$(MAKEFILE) sub-newmat-make_default-ordered  FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) 
sub-qwt-make_default: qwt/$(MAKEFILE) FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) 
sub-qwt-make_first-ordered: qwt/$(MAKEFILE) sub-newmat-make_first-ordered  FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) first
sub-qwt-make_first: qwt/$(MAKEFILE) FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) first
sub-qwt-all-ordered: qwt/$(MAKEFILE) sub-newmat-all-ordered  FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) all
sub-qwt-all: qwt/$(MAKEFILE) FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) all
sub-qwt-clean-ordered: qwt/$(MAKEFILE) sub-newmat-clean-ordered  FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) clean
sub-qwt-clean: qwt/$(MAKEFILE) FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) clean
sub-qwt-distclean-ordered: qwt/$(MAKEFILE) sub-newmat-distclean-ordered  FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) distclean
sub-qwt-distclean: qwt/$(MAKEFILE) FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) distclean
sub-qwt-install_subtargets-ordered: qwt/$(MAKEFILE) sub-newmat-install_subtargets-ordered  FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) install
sub-qwt-install_subtargets: qwt/$(MAKEFILE) FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) install
sub-qwt-uninstall_subtargets-ordered: qwt/$(MAKEFILE) sub-newmat-uninstall_subtargets-ordered  FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) uninstall
sub-qwt-uninstall_subtargets: qwt/$(MAKEFILE) FORCE
	cd qwt/ && $(MAKE) -f $(MAKEFILE) uninstall
qwtpolar/$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) qwtpolar/ || $(MKDIR) qwtpolar/ 
	cd qwtpolar/ && $(QMAKE) /home/skycaptain/gnss/develope/BNC_2.12.7_V4/qwtpolar/qwtpolar.pro -o $(MAKEFILE)
sub-qwtpolar-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) qwtpolar/ || $(MKDIR) qwtpolar/ 
	cd qwtpolar/ && $(QMAKE) /home/skycaptain/gnss/develope/BNC_2.12.7_V4/qwtpolar/qwtpolar.pro -o $(MAKEFILE)
sub-qwtpolar: qwtpolar/$(MAKEFILE) FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE)
sub-qwtpolar-make_default-ordered: qwtpolar/$(MAKEFILE) sub-qwt-make_default-ordered  FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) 
sub-qwtpolar-make_default: qwtpolar/$(MAKEFILE) FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) 
sub-qwtpolar-make_first-ordered: qwtpolar/$(MAKEFILE) sub-qwt-make_first-ordered  FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) first
sub-qwtpolar-make_first: qwtpolar/$(MAKEFILE) FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) first
sub-qwtpolar-all-ordered: qwtpolar/$(MAKEFILE) sub-qwt-all-ordered  FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) all
sub-qwtpolar-all: qwtpolar/$(MAKEFILE) FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) all
sub-qwtpolar-clean-ordered: qwtpolar/$(MAKEFILE) sub-qwt-clean-ordered  FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) clean
sub-qwtpolar-clean: qwtpolar/$(MAKEFILE) FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) clean
sub-qwtpolar-distclean-ordered: qwtpolar/$(MAKEFILE) sub-qwt-distclean-ordered  FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) distclean
sub-qwtpolar-distclean: qwtpolar/$(MAKEFILE) FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) distclean
sub-qwtpolar-install_subtargets-ordered: qwtpolar/$(MAKEFILE) sub-qwt-install_subtargets-ordered  FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) install
sub-qwtpolar-install_subtargets: qwtpolar/$(MAKEFILE) FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) install
sub-qwtpolar-uninstall_subtargets-ordered: qwtpolar/$(MAKEFILE) sub-qwt-uninstall_subtargets-ordered  FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) uninstall
sub-qwtpolar-uninstall_subtargets: qwtpolar/$(MAKEFILE) FORCE
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) uninstall
src/$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) src/ || $(MKDIR) src/ 
	cd src/ && $(QMAKE) /home/skycaptain/gnss/develope/BNC_2.12.7_V4/src/src.pro -o $(MAKEFILE)
sub-src-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) src/ || $(MKDIR) src/ 
	cd src/ && $(QMAKE) /home/skycaptain/gnss/develope/BNC_2.12.7_V4/src/src.pro -o $(MAKEFILE)
sub-src: src/$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE)
sub-src-make_default-ordered: src/$(MAKEFILE) sub-qwtpolar-make_default-ordered  FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) 
sub-src-make_default: src/$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) 
sub-src-make_first-ordered: src/$(MAKEFILE) sub-qwtpolar-make_first-ordered  FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) first
sub-src-make_first: src/$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) first
sub-src-all-ordered: src/$(MAKEFILE) sub-qwtpolar-all-ordered  FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) all
sub-src-all: src/$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) all
sub-src-clean-ordered: src/$(MAKEFILE) sub-qwtpolar-clean-ordered  FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) clean
sub-src-clean: src/$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) clean
sub-src-distclean-ordered: src/$(MAKEFILE) sub-qwtpolar-distclean-ordered  FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) distclean
sub-src-distclean: src/$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) distclean
sub-src-install_subtargets-ordered: src/$(MAKEFILE) sub-qwtpolar-install_subtargets-ordered  FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) install
sub-src-install_subtargets: src/$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) install
sub-src-uninstall_subtargets-ordered: src/$(MAKEFILE) sub-qwtpolar-uninstall_subtargets-ordered  FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) uninstall
sub-src-uninstall_subtargets: src/$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) uninstall

Makefile: bnc.pro  /usr/local/Trolltech/Qt-4.8.7/mkspecs/linux-g++/qmake.conf /usr/local/Trolltech/Qt-4.8.7/mkspecs/common/unix.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/linux.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/gcc-base.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/gcc-base-unix.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/g++-base.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/g++-unix.conf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/release.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/shared.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/moc.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/resources.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/uic.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/lex.prf \
		/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/include_source_dir.prf
	$(QMAKE) -o Makefile bnc.pro
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/unix.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/linux.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/gcc-base.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/gcc-base-unix.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/g++-base.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/common/g++-unix.conf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/qconfig.pri:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/modules/qt_webkit_version.pri:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt_functions.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt_config.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/exclusive_builds.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/default_pre.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/release.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/default_post.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/shared.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/warn_on.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/qt.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/unix/thread.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/moc.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/resources.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/uic.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/yacc.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/lex.prf:
/usr/local/Trolltech/Qt-4.8.7/mkspecs/features/include_source_dir.prf:
qmake: qmake_all FORCE
	@$(QMAKE) -o Makefile bnc.pro

qmake_all: sub-newmat-qmake_all sub-qwt-qmake_all sub-qwtpolar-qmake_all sub-src-qmake_all FORCE

make_default: sub-newmat-make_default-ordered sub-qwt-make_default-ordered sub-qwtpolar-make_default-ordered sub-src-make_default-ordered FORCE
make_first: sub-newmat-make_first-ordered sub-qwt-make_first-ordered sub-qwtpolar-make_first-ordered sub-src-make_first-ordered FORCE
all: sub-newmat-all-ordered sub-qwt-all-ordered sub-qwtpolar-all-ordered sub-src-all-ordered FORCE
clean: sub-newmat-clean-ordered sub-qwt-clean-ordered sub-qwtpolar-clean-ordered sub-src-clean-ordered FORCE
distclean: sub-newmat-distclean-ordered sub-qwt-distclean-ordered sub-qwtpolar-distclean-ordered sub-src-distclean-ordered FORCE
	-$(DEL_FILE) Makefile
install_subtargets: sub-newmat-install_subtargets-ordered sub-qwt-install_subtargets-ordered sub-qwtpolar-install_subtargets-ordered sub-src-install_subtargets-ordered FORCE
uninstall_subtargets: sub-newmat-uninstall_subtargets-ordered sub-qwt-uninstall_subtargets-ordered sub-qwtpolar-uninstall_subtargets-ordered sub-src-uninstall_subtargets-ordered FORCE

sub-newmat-check_ordered: newmat/$(MAKEFILE)
	cd newmat/ && $(MAKE) -f $(MAKEFILE) check
sub-qwt-check_ordered: qwt/$(MAKEFILE) sub-newmat-check_ordered 
	cd qwt/ && $(MAKE) -f $(MAKEFILE) check
sub-qwtpolar-check_ordered: qwtpolar/$(MAKEFILE) sub-qwt-check_ordered 
	cd qwtpolar/ && $(MAKE) -f $(MAKEFILE) check
sub-src-check_ordered: src/$(MAKEFILE) sub-qwtpolar-check_ordered 
	cd src/ && $(MAKE) -f $(MAKEFILE) check
check: sub-newmat-check_ordered sub-qwt-check_ordered sub-qwtpolar-check_ordered sub-src-check_ordered

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all
install: install_subtargets  FORCE

uninstall:  uninstall_subtargets FORCE

FORCE:

