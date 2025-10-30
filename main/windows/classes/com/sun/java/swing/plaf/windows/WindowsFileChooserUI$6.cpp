#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$6.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef VIEWTYPE_DETAILS
#undef VIEWTYPE_LIST

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $FilePane = ::sun::swing::FilePane;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$6_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$6, this$0)},
	{"val$detailsViewMenuItem", "Ljavax/swing/JRadioButtonMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$6, val$detailsViewMenuItem)},
	{"val$listViewMenuItem", "Ljavax/swing/JRadioButtonMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$6, val$listViewMenuItem)},
	{}
};

$MethodInfo _WindowsFileChooserUI$6_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljavax/swing/JRadioButtonMenuItem;Ljavax/swing/JRadioButtonMenuItem;)V", "()V", 0, $method(static_cast<void(WindowsFileChooserUI$6::*)($WindowsFileChooserUI*,$JRadioButtonMenuItem*,$JRadioButtonMenuItem*)>(&WindowsFileChooserUI$6::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$6_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _WindowsFileChooserUI$6_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$6",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_WindowsFileChooserUI$6_FieldInfo_,
	_WindowsFileChooserUI$6_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$6_EnclosingMethodInfo_,
	_WindowsFileChooserUI$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$6($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$6));
}

void WindowsFileChooserUI$6::init$($WindowsFileChooserUI* this$0, $JRadioButtonMenuItem* val$listViewMenuItem, $JRadioButtonMenuItem* val$detailsViewMenuItem) {
	$set(this, this$0, this$0);
	$set(this, val$listViewMenuItem, val$listViewMenuItem);
	$set(this, val$detailsViewMenuItem, val$detailsViewMenuItem);
}

void WindowsFileChooserUI$6::propertyChange($PropertyChangeEvent* e) {
	if ("viewType"_s->equals($($nc(e)->getPropertyName()))) {
		switch ($nc(this->this$0->filePane)->getViewType()) {
		case $FilePane::VIEWTYPE_LIST:
			{
				$nc(this->val$listViewMenuItem)->setSelected(true);
				break;
			}
		case $FilePane::VIEWTYPE_DETAILS:
			{
				$nc(this->val$detailsViewMenuItem)->setSelected(true);
				break;
			}
		}
	}
}

WindowsFileChooserUI$6::WindowsFileChooserUI$6() {
}

$Class* WindowsFileChooserUI$6::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$6, name, initialize, &_WindowsFileChooserUI$6_ClassInfo_, allocate$WindowsFileChooserUI$6);
	return class$;
}

$Class* WindowsFileChooserUI$6::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com