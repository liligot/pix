SUBDIRS = data

extensiondir = $(pkglibdir)/extensions
extension_LTLIBRARIES = libcatalogs.la

libcatalogs_la_SOURCES = 		\
	actions.c			\
	actions.h			\
	callbacks.c			\
	callbacks.h			\
	dlg-add-to-catalog.c		\
	dlg-add-to-catalog.h		\
	dlg-catalog-properties.c	\
	dlg-catalog-properties.h	\
	dlg-organize-files.c		\
	dlg-organize-files.h		\
	gth-catalog.c			\
	gth-catalog.h			\
	gth-file-source-catalogs.c 	\
	gth-file-source-catalogs.h	\
	gth-organize-task.c		\
	gth-organize-task.h		\
	main.c

libcatalogs_la_CFLAGS = $(PIX_CFLAGS) -I$(top_srcdir) -I$(top_builddir)/pix 
libcatalogs_la_LDFLAGS = $(EXTENSION_LIBTOOL_FLAGS)
libcatalogs_la_LIBADD = $(PIX_LIBS)
libcatalogs_la_DEPENDENCIES = $(top_builddir)/pix/pix$(EXEEXT)

extensioninidir = $(extensiondir)
extensionini_in_files = catalogs.extension.in.in
extensionini_DATA = $(extensionini_in_files:.extension.in.in=.extension)

@PIX_EXTENSION_IN_RULE@
@PIX_EXTENSION_RULE@

EXTRA_DIST = $(extensionini_in_files) 

DISTCLEANFILES = $(extensionini_DATA)

-include $(top_srcdir)/git.mk
