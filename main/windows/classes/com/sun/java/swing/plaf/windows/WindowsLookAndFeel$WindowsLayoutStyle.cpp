#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$WindowsLayoutStyle.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$3.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/awt/Container.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/SwingConstants.h>
#include <sun/swing/DefaultLayoutStyle.h>
#include <jcpp.h>

#undef EAST
#undef WEST

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsLookAndFeel$3 = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$3;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;
using $SwingConstants = ::javax::swing::SwingConstants;
using $DefaultLayoutStyle = ::sun::swing::DefaultLayoutStyle;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$WindowsLayoutStyle_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$WindowsLayoutStyle, this$0)},
	{}
};

$MethodInfo _WindowsLookAndFeel$WindowsLayoutStyle_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsLookAndFeel$WindowsLayoutStyle::*)($WindowsLookAndFeel*)>(&WindowsLookAndFeel$WindowsLayoutStyle::init$))},
	{"getContainerGap", "(Ljavax/swing/JComponent;ILjava/awt/Container;)I", nullptr, $PUBLIC},
	{"getPreferredGap", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;Ljavax/swing/LayoutStyle$ComponentPlacement;ILjava/awt/Container;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$WindowsLayoutStyle_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsLayoutStyle", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "WindowsLayoutStyle", $PRIVATE},
	{}
};

$ClassInfo _WindowsLookAndFeel$WindowsLayoutStyle_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsLayoutStyle",
	"sun.swing.DefaultLayoutStyle",
	nullptr,
	_WindowsLookAndFeel$WindowsLayoutStyle_FieldInfo_,
	_WindowsLookAndFeel$WindowsLayoutStyle_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$WindowsLayoutStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$WindowsLayoutStyle($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$WindowsLayoutStyle));
}

void WindowsLookAndFeel$WindowsLayoutStyle::init$($WindowsLookAndFeel* this$0) {
	$set(this, this$0, this$0);
	$DefaultLayoutStyle::init$();
}

int32_t WindowsLookAndFeel$WindowsLayoutStyle::getPreferredGap($JComponent* component1, $JComponent* component2, $LayoutStyle$ComponentPlacement* type, int32_t position, $Container* parent) {
	$DefaultLayoutStyle::getPreferredGap(component1, component2, type, position, parent);
	$init($WindowsLookAndFeel$3);
	switch ($nc($WindowsLookAndFeel$3::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->get($nc((type))->ordinal())) {
	case 1:
		{
			if (position == $SwingConstants::EAST || position == $SwingConstants::WEST) {
				int32_t indent = getIndent(component1, position);
				if (indent > 0) {
					return indent;
				}
				return 10;
			}
		}
	case 2:
		{
			if (isLabelAndNonlabel(component1, component2, position)) {
				return getButtonGap(component1, component2, position, this->this$0->dluToPixels(3, position));
			}
			return getButtonGap(component1, component2, position, this->this$0->dluToPixels(4, position));
		}
	case 3:
		{
			return getButtonGap(component1, component2, position, this->this$0->dluToPixels(7, position));
		}
	}
	return 0;
}

int32_t WindowsLookAndFeel$WindowsLayoutStyle::getContainerGap($JComponent* component, int32_t position, $Container* parent) {
	$DefaultLayoutStyle::getContainerGap(component, position, parent);
	return getButtonGap(component, position, this->this$0->dluToPixels(7, position));
}

WindowsLookAndFeel$WindowsLayoutStyle::WindowsLookAndFeel$WindowsLayoutStyle() {
}

$Class* WindowsLookAndFeel$WindowsLayoutStyle::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$WindowsLayoutStyle, name, initialize, &_WindowsLookAndFeel$WindowsLayoutStyle_ClassInfo_, allocate$WindowsLookAndFeel$WindowsLayoutStyle);
	return class$;
}

$Class* WindowsLookAndFeel$WindowsLayoutStyle::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com