#include <com/sun/java/swing/plaf/windows/WindowsBorders.h>

#include <com/sun/java/swing/plaf/windows/WindowsBorders$ComplementDashedBorder.h>
#include <com/sun/java/swing/plaf/windows/WindowsBorders$InternalFrameLineBorder.h>
#include <com/sun/java/swing/plaf/windows/WindowsBorders$ProgressBarBorder.h>
#include <com/sun/java/swing/plaf/windows/WindowsBorders$ToolBarBorder.h>
#include <java/awt/Color.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/BorderUIResource$CompoundBorderUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$ButtonBorder.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <jcpp.h>

#undef RAISED

using $WindowsBorders$ComplementDashedBorder = ::com::sun::java::swing::plaf::windows::WindowsBorders$ComplementDashedBorder;
using $WindowsBorders$InternalFrameLineBorder = ::com::sun::java::swing::plaf::windows::WindowsBorders$InternalFrameLineBorder;
using $WindowsBorders$ProgressBarBorder = ::com::sun::java::swing::plaf::windows::WindowsBorders$ProgressBarBorder;
using $WindowsBorders$ToolBarBorder = ::com::sun::java::swing::plaf::windows::WindowsBorders$ToolBarBorder;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $BorderUIResource$CompoundBorderUIResource = ::javax::swing::plaf::BorderUIResource$CompoundBorderUIResource;
using $BasicBorders$ButtonBorder = ::javax::swing::plaf::basic::BasicBorders$ButtonBorder;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsBorders_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsBorders::*)()>(&WindowsBorders::init$))},
	{"getFocusCellHighlightBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&WindowsBorders::getFocusCellHighlightBorder))},
	{"getInternalFrameBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&WindowsBorders::getInternalFrameBorder))},
	{"getProgressBarBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&WindowsBorders::getProgressBarBorder))},
	{"getTableHeaderBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&WindowsBorders::getTableHeaderBorder))},
	{"getToolBarBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&WindowsBorders::getToolBarBorder))},
	{}
};

$InnerClassInfo _WindowsBorders_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsBorders$InternalFrameLineBorder", "com.sun.java.swing.plaf.windows.WindowsBorders", "InternalFrameLineBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsBorders$ComplementDashedBorder", "com.sun.java.swing.plaf.windows.WindowsBorders", "ComplementDashedBorder", $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsBorders$DashedBorder", "com.sun.java.swing.plaf.windows.WindowsBorders", "DashedBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsBorders$ToolBarBorder", "com.sun.java.swing.plaf.windows.WindowsBorders", "ToolBarBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsBorders$ProgressBarBorder", "com.sun.java.swing.plaf.windows.WindowsBorders", "ProgressBarBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WindowsBorders_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsBorders",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WindowsBorders_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsBorders_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsBorders$InternalFrameLineBorder,com.sun.java.swing.plaf.windows.WindowsBorders$ComplementDashedBorder,com.sun.java.swing.plaf.windows.WindowsBorders$DashedBorder,com.sun.java.swing.plaf.windows.WindowsBorders$ToolBarBorder,com.sun.java.swing.plaf.windows.WindowsBorders$ProgressBarBorder"
};

$Object* allocate$WindowsBorders($Class* clazz) {
	return $of($alloc(WindowsBorders));
}

void WindowsBorders::init$() {
}

$Border* WindowsBorders::getProgressBarBorder() {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$1, $nc(table)->getColor("ProgressBar.shadow"_s));
	$var($Border, var$0, static_cast<$Border*>($new($WindowsBorders$ProgressBarBorder, var$1, $(table->getColor("ProgressBar.highlight"_s)))));
	$var($Border, progressBarBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($EmptyBorder, 1, 1, 1, 1)));
	return progressBarBorder;
}

$Border* WindowsBorders::getToolBarBorder() {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$0, $nc(table)->getColor("ToolBar.shadow"_s));
	$var($Border, toolBarBorder, $new($WindowsBorders$ToolBarBorder, var$0, $(table->getColor("ToolBar.highlight"_s))));
	return toolBarBorder;
}

$Border* WindowsBorders::getFocusCellHighlightBorder() {
	return $new($WindowsBorders$ComplementDashedBorder);
}

$Border* WindowsBorders::getTableHeaderBorder() {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$1, $nc(table)->getColor("Table.shadow"_s));
	$var($Color, var$2, table->getColor("Table.darkShadow"_s));
	$var($Color, var$3, table->getColor("Table.light"_s));
	$var($Border, var$0, static_cast<$Border*>($new($BasicBorders$ButtonBorder, var$1, var$2, var$3, $(table->getColor("Table.highlight"_s)))));
	$var($Border, tableHeaderBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($BasicBorders$MarginBorder)));
	return tableHeaderBorder;
}

$Border* WindowsBorders::getInternalFrameBorder() {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$1, $nc(table)->getColor("InternalFrame.borderColor"_s));
	$var($Color, var$2, table->getColor("InternalFrame.borderHighlight"_s));
	$var($Color, var$3, table->getColor("InternalFrame.borderDarkShadow"_s));
	$var($Border, var$0, $BorderFactory::createBevelBorder($BevelBorder::RAISED, var$1, var$2, var$3, $(table->getColor("InternalFrame.borderShadow"_s))));
	$var($Color, var$4, $nc(table)->getColor("InternalFrame.activeBorderColor"_s));
	$var($Color, var$5, table->getColor("InternalFrame.inactiveBorderColor"_s));
	$var($Border, internalFrameBorder, $new($BorderUIResource$CompoundBorderUIResource, var$0, $$new($WindowsBorders$InternalFrameLineBorder, var$4, var$5, table->getInt("InternalFrame.borderWidth"_s))));
	return internalFrameBorder;
}

WindowsBorders::WindowsBorders() {
}

$Class* WindowsBorders::load$($String* name, bool initialize) {
	$loadClass(WindowsBorders, name, initialize, &_WindowsBorders_ClassInfo_, allocate$WindowsBorders);
	return class$;
}

$Class* WindowsBorders::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com