#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI$XPDefaultRenderer.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TableHeaderUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>
#include <jcpp.h>

using $WindowsTableHeaderUI$XPDefaultRenderer = ::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI$XPDefaultRenderer;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableHeaderUI = ::javax::swing::plaf::TableHeaderUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $DefaultTableCellHeaderRenderer = ::sun::swing::table::DefaultTableCellHeaderRenderer;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsTableHeaderUI_FieldInfo_[] = {
	{"originalHeaderRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(WindowsTableHeaderUI, originalHeaderRenderer)},
	{}
};

$MethodInfo _WindowsTableHeaderUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTableHeaderUI::*)()>(&WindowsTableHeaderUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(WindowsTableHeaderUI*)>(&WindowsTableHeaderUI::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;)Ljavax/swing/table/JTableHeader;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTableHeader*(*)(WindowsTableHeaderUI*)>(&WindowsTableHeaderUI::access$100))},
	{"access$200", "(Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;)Ljavax/swing/table/JTableHeader;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTableHeader*(*)(WindowsTableHeaderUI*)>(&WindowsTableHeaderUI::access$200))},
	{"access$300", "(Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;)Ljavax/swing/table/JTableHeader;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTableHeader*(*)(WindowsTableHeaderUI*)>(&WindowsTableHeaderUI::access$300))},
	{"access$400", "(Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;)Ljavax/swing/table/JTableHeader;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTableHeader*(*)(WindowsTableHeaderUI*)>(&WindowsTableHeaderUI::access$400))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsTableHeaderUI::createUI))},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"rolloverColumnUpdated", "(II)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsTableHeaderUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$IconBorder", "com.sun.java.swing.plaf.windows.WindowsTableHeaderUI", "IconBorder", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$XPDefaultRenderer", "com.sun.java.swing.plaf.windows.WindowsTableHeaderUI", "XPDefaultRenderer", $PRIVATE},
	{}
};

$ClassInfo _WindowsTableHeaderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI",
	"javax.swing.plaf.basic.BasicTableHeaderUI",
	nullptr,
	_WindowsTableHeaderUI_FieldInfo_,
	_WindowsTableHeaderUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTableHeaderUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$1,com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$IconBorder,com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$XPDefaultRenderer"
};

$Object* allocate$WindowsTableHeaderUI($Class* clazz) {
	return $of($alloc(WindowsTableHeaderUI));
}

$JTableHeader* WindowsTableHeaderUI::access$400(WindowsTableHeaderUI* x0) {
	$init(WindowsTableHeaderUI);
	return $nc(x0)->header;
}

$JTableHeader* WindowsTableHeaderUI::access$300(WindowsTableHeaderUI* x0) {
	$init(WindowsTableHeaderUI);
	return $nc(x0)->header;
}

$JTableHeader* WindowsTableHeaderUI::access$200(WindowsTableHeaderUI* x0) {
	$init(WindowsTableHeaderUI);
	return $nc(x0)->header;
}

$JTableHeader* WindowsTableHeaderUI::access$100(WindowsTableHeaderUI* x0) {
	$init(WindowsTableHeaderUI);
	return $nc(x0)->header;
}

int32_t WindowsTableHeaderUI::access$000(WindowsTableHeaderUI* x0) {
	$init(WindowsTableHeaderUI);
	return $nc(x0)->getRolloverColumn();
}

void WindowsTableHeaderUI::init$() {
	$BasicTableHeaderUI::init$();
}

$ComponentUI* WindowsTableHeaderUI::createUI($JComponent* h) {
	$init(WindowsTableHeaderUI);
	return $new(WindowsTableHeaderUI);
}

void WindowsTableHeaderUI::installUI($JComponent* c) {
	$BasicTableHeaderUI::installUI(c);
	if ($XPStyle::getXP() != nullptr) {
		$set(this, originalHeaderRenderer, $nc(this->header)->getDefaultRenderer());
		if ($instanceOf($UIResource, this->originalHeaderRenderer)) {
			$nc(this->header)->setDefaultRenderer($$new($WindowsTableHeaderUI$XPDefaultRenderer, this));
		}
	}
}

void WindowsTableHeaderUI::uninstallUI($JComponent* c) {
	if ($instanceOf($WindowsTableHeaderUI$XPDefaultRenderer, $($nc(this->header)->getDefaultRenderer()))) {
		$nc(this->header)->setDefaultRenderer(this->originalHeaderRenderer);
	}
	$BasicTableHeaderUI::uninstallUI(c);
}

void WindowsTableHeaderUI::rolloverColumnUpdated(int32_t oldColumn, int32_t newColumn) {
	$useLocalCurrentObjectStackCache();
	if ($XPStyle::getXP() != nullptr) {
		$nc(this->header)->repaint($($nc(this->header)->getHeaderRect(oldColumn)));
		$nc(this->header)->repaint($($nc(this->header)->getHeaderRect(newColumn)));
	}
}

WindowsTableHeaderUI::WindowsTableHeaderUI() {
}

$Class* WindowsTableHeaderUI::load$($String* name, bool initialize) {
	$loadClass(WindowsTableHeaderUI, name, initialize, &_WindowsTableHeaderUI_ClassInfo_, allocate$WindowsTableHeaderUI);
	return class$;
}

$Class* WindowsTableHeaderUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com