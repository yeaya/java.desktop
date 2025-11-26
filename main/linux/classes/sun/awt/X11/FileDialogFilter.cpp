#include <sun/awt/X11/FileDialogFilter.h>

#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _FileDialogFilter_FieldInfo_[] = {
	{"filter", "Ljava/lang/String;", nullptr, 0, $field(FileDialogFilter, filter)},
	{}
};

$MethodInfo _FileDialogFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileDialogFilter::*)($String*)>(&FileDialogFilter::init$))},
	{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"convert", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(FileDialogFilter::*)($String*)>(&FileDialogFilter::convert))},
	{"matches", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(FileDialogFilter::*)($String*,$String*)>(&FileDialogFilter::matches))},
	{}
};

$ClassInfo _FileDialogFilter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.FileDialogFilter",
	"java.lang.Object",
	"java.io.FilenameFilter",
	_FileDialogFilter_FieldInfo_,
	_FileDialogFilter_MethodInfo_
};

$Object* allocate$FileDialogFilter($Class* clazz) {
	return $of($alloc(FileDialogFilter));
}

void FileDialogFilter::init$($String* f) {
	$set(this, filter, f);
}

bool FileDialogFilter::accept($File* dir, $String* fileName) {
	$var($File, f, $new($File, dir, fileName));
	if (f->isDirectory()) {
		return true;
	} else {
		return matches(fileName, this->filter);
	}
}

bool FileDialogFilter::matches($String* input, $String* filter) {
	$var($String, regex, convert(filter));
	return $nc(input)->matches(regex);
}

$String* FileDialogFilter::convert($String* filter) {
	$var($String, regex, $str({"^"_s, filter, "$"_s}));
	$assign(regex, $nc(regex)->replaceAll("\\."_s, "\\\\."_s));
	$assign(regex, regex->replaceAll("\\?"_s, "."_s));
	$assign(regex, regex->replaceAll("\\*"_s, ".*"_s));
	return regex;
}

FileDialogFilter::FileDialogFilter() {
}

$Class* FileDialogFilter::load$($String* name, bool initialize) {
	$loadClass(FileDialogFilter, name, initialize, &_FileDialogFilter_ClassInfo_, allocate$FileDialogFilter);
	return class$;
}

$Class* FileDialogFilter::class$ = nullptr;

		} // X11
	} // awt
} // sun