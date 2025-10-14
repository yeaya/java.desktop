#include <sun/awt/shell/DefaultShellFolder.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace sun {
	namespace awt {
		namespace shell {

$MethodInfo _DefaultShellFolder_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/ShellFolder;Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(DefaultShellFolder::*)($ShellFolder*,$File*)>(&DefaultShellFolder::init$))},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getExecutableType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFolderType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLinkLocation", "()Lsun/awt/shell/ShellFolder;", nullptr, $PUBLIC},
	{"isHidden", "()Z", nullptr, $PUBLIC},
	{"isLink", "()Z", nullptr, $PUBLIC},
	{"listFiles", "()[Ljava/io/File;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _DefaultShellFolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.DefaultShellFolder",
	"sun.awt.shell.ShellFolder",
	nullptr,
	nullptr,
	_DefaultShellFolder_MethodInfo_
};

$Object* allocate$DefaultShellFolder($Class* clazz) {
	return $of($alloc(DefaultShellFolder));
}

void DefaultShellFolder::init$($ShellFolder* parent, $File* f) {
	$ShellFolder::init$(parent, $($nc(f)->getAbsolutePath()));
}

$Object* DefaultShellFolder::writeReplace() {
	return $of($new($File, $(getPath())));
}

$FileArray* DefaultShellFolder::listFiles() {
	$var($FileArray, files, $ShellFolder::listFiles());
	if (files != nullptr) {
		for (int32_t i = 0; i < files->length; ++i) {
			files->set(i, $$new(DefaultShellFolder, this, files->get(i)));
		}
	}
	return files;
}

bool DefaultShellFolder::isLink() {
	return false;
}

bool DefaultShellFolder::isHidden() {
	$var($String, fileName, getName());
	if ($nc(fileName)->length() > 0) {
		return (fileName->charAt(0) == u'.');
	}
	return false;
}

$ShellFolder* DefaultShellFolder::getLinkLocation() {
	return nullptr;
}

$String* DefaultShellFolder::getDisplayName() {
	return getName();
}

$String* DefaultShellFolder::getFolderType() {
	if (isDirectory()) {
		return "File Folder"_s;
	} else {
		return "File"_s;
	}
}

$String* DefaultShellFolder::getExecutableType() {
	return nullptr;
}

DefaultShellFolder::DefaultShellFolder() {
}

$Class* DefaultShellFolder::load$($String* name, bool initialize) {
	$loadClass(DefaultShellFolder, name, initialize, &_DefaultShellFolder_ClassInfo_, allocate$DefaultShellFolder);
	return class$;
}

$Class* DefaultShellFolder::class$ = nullptr;

		} // shell
	} // awt
} // sun