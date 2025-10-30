#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$WindowsFileView.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/io/File.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$BasicFileView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $BasicFileChooserUI$BasicFileView = ::javax::swing::plaf::basic::BasicFileChooserUI$BasicFileView;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$WindowsFileView_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$WindowsFileView, this$0)},
	{}
};

$MethodInfo _WindowsFileChooserUI$WindowsFileView_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(WindowsFileChooserUI$WindowsFileView::*)($WindowsFileChooserUI*)>(&WindowsFileChooserUI$WindowsFileView::init$))},
	{"getIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsFileChooserUI$WindowsFileView_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$WindowsFileView", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "WindowsFileView", $PROTECTED},
	{"javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView", "javax.swing.plaf.basic.BasicFileChooserUI", "BasicFileView", $PROTECTED},
	{}
};

$ClassInfo _WindowsFileChooserUI$WindowsFileView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$WindowsFileView",
	"javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView",
	nullptr,
	_WindowsFileChooserUI$WindowsFileView_FieldInfo_,
	_WindowsFileChooserUI$WindowsFileView_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsFileChooserUI$WindowsFileView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$WindowsFileView($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$WindowsFileView));
}

void WindowsFileChooserUI$WindowsFileView::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$BasicFileChooserUI$BasicFileView::init$(this$0);
}

$Icon* WindowsFileChooserUI$WindowsFileView::getIcon($File* f) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, icon, getCachedIcon(f));
	if (icon != nullptr) {
		return icon;
	}
	if (f != nullptr) {
		$assign(icon, $nc($($nc($(this->this$0->getFileChooser()))->getFileSystemView()))->getSystemIcon(f));
	}
	if (icon == nullptr) {
		$assign(icon, $BasicFileChooserUI$BasicFileView::getIcon(f));
	}
	cacheIcon(f, icon);
	return icon;
}

WindowsFileChooserUI$WindowsFileView::WindowsFileChooserUI$WindowsFileView() {
}

$Class* WindowsFileChooserUI$WindowsFileView::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$WindowsFileView, name, initialize, &_WindowsFileChooserUI$WindowsFileView_ClassInfo_, allocate$WindowsFileChooserUI$WindowsFileView);
	return class$;
}

$Class* WindowsFileChooserUI$WindowsFileView::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com