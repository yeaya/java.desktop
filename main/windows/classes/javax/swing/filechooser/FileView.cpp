#include <javax/swing/filechooser/FileView.h>

#include <java/io/File.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace javax {
	namespace swing {
		namespace filechooser {

$MethodInfo _FileView_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FileView::*)()>(&FileView::init$))},
	{"getDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getName", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTypeDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isTraversable", "(Ljava/io/File;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FileView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.filechooser.FileView",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FileView_MethodInfo_
};

$Object* allocate$FileView($Class* clazz) {
	return $of($alloc(FileView));
}

void FileView::init$() {
}

$String* FileView::getName($File* f) {
	return nullptr;
}

$String* FileView::getDescription($File* f) {
	return nullptr;
}

$String* FileView::getTypeDescription($File* f) {
	return nullptr;
}

$Icon* FileView::getIcon($File* f) {
	return nullptr;
}

$Boolean* FileView::isTraversable($File* f) {
	return nullptr;
}

FileView::FileView() {
}

$Class* FileView::load$($String* name, bool initialize) {
	$loadClass(FileView, name, initialize, &_FileView_ClassInfo_, allocate$FileView);
	return class$;
}

$Class* FileView::class$ = nullptr;

		} // filechooser
	} // swing
} // javax