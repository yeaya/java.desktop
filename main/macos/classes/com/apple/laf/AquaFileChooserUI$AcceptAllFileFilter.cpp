#include <com/apple/laf/AquaFileChooserUI$AcceptAllFileFilter.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/io/File.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaFileChooserUI$AcceptAllFileFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaFileChooserUI$AcceptAllFileFilter::*)()>(&AquaFileChooserUI$AcceptAllFileFilter::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$AcceptAllFileFilter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$AcceptAllFileFilter", "com.apple.laf.AquaFileChooserUI", "AcceptAllFileFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AquaFileChooserUI$AcceptAllFileFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$AcceptAllFileFilter",
	"javax.swing.filechooser.FileFilter",
	nullptr,
	nullptr,
	_AquaFileChooserUI$AcceptAllFileFilter_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$AcceptAllFileFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$AcceptAllFileFilter($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$AcceptAllFileFilter));
}

void AquaFileChooserUI$AcceptAllFileFilter::init$() {
	$FileFilter::init$();
}

bool AquaFileChooserUI$AcceptAllFileFilter::accept($File* f) {
	return true;
}

$String* AquaFileChooserUI$AcceptAllFileFilter::getDescription() {
	return $UIManager::getString("FileChooser.acceptAllFileFilterText"_s);
}

AquaFileChooserUI$AcceptAllFileFilter::AquaFileChooserUI$AcceptAllFileFilter() {
}

$Class* AquaFileChooserUI$AcceptAllFileFilter::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$AcceptAllFileFilter, name, initialize, &_AquaFileChooserUI$AcceptAllFileFilter_ClassInfo_, allocate$AquaFileChooserUI$AcceptAllFileFilter);
	return class$;
}

$Class* AquaFileChooserUI$AcceptAllFileFilter::class$ = nullptr;

		} // laf
	} // apple
} // com