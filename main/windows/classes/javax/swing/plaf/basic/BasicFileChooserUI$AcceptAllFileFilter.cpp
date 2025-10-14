#include <javax/swing/plaf/basic/BasicFileChooserUI$AcceptAllFileFilter.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$AcceptAllFileFilter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$AcceptAllFileFilter, this$0)},
	{}
};

$MethodInfo _BasicFileChooserUI$AcceptAllFileFilter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicFileChooserUI$AcceptAllFileFilter::*)($BasicFileChooserUI*)>(&BasicFileChooserUI$AcceptAllFileFilter::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI$AcceptAllFileFilter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$AcceptAllFileFilter", "javax.swing.plaf.basic.BasicFileChooserUI", "AcceptAllFileFilter", $PROTECTED},
	{}
};

$ClassInfo _BasicFileChooserUI$AcceptAllFileFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$AcceptAllFileFilter",
	"javax.swing.filechooser.FileFilter",
	nullptr,
	_BasicFileChooserUI$AcceptAllFileFilter_FieldInfo_,
	_BasicFileChooserUI$AcceptAllFileFilter_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$AcceptAllFileFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$AcceptAllFileFilter($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$AcceptAllFileFilter));
}

void BasicFileChooserUI$AcceptAllFileFilter::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$FileFilter::init$();
}

bool BasicFileChooserUI$AcceptAllFileFilter::accept($File* f) {
	return true;
}

$String* BasicFileChooserUI$AcceptAllFileFilter::getDescription() {
	return $UIManager::getString("FileChooser.acceptAllFileFilterText"_s);
}

BasicFileChooserUI$AcceptAllFileFilter::BasicFileChooserUI$AcceptAllFileFilter() {
}

$Class* BasicFileChooserUI$AcceptAllFileFilter::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$AcceptAllFileFilter, name, initialize, &_BasicFileChooserUI$AcceptAllFileFilter_ClassInfo_, allocate$BasicFileChooserUI$AcceptAllFileFilter);
	return class$;
}

$Class* BasicFileChooserUI$AcceptAllFileFilter::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax