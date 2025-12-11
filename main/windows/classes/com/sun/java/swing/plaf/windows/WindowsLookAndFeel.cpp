#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsBorders.h>
#include <com/sun/java/swing/plaf/windows/WindowsClassicLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$ScalableIconUIResource.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$2.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$AudioAction.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$FocusColorProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$FontDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$LazyWindowsIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$RGBGrayFilter.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$SkinIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$TriggerDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$WindowsFontProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$WindowsFontSizeProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$WindowsLayoutStyle.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPBorderValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPColorValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPDLUValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuUI$MnemonicListener.h>
#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsRootPaneUI$AltProcessor.h>
#include <com/sun/java/swing/plaf/windows/WindowsRootPaneUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsTreeUI$CollapsedIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsTreeUI$ExpandedIcon.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyEventPostProcessor.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/FilteredImageSource.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/RGBImageFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo$WindowsVersion.h>
#include <sun/awt/OSInfo.h>
#include <sun/awt/SunToolkit.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/DefaultLayoutStyle.h>
#include <sun/swing/ImageIconUIResource.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/icon/SortArrowIcon.h>
#include <sun/swing/plaf/windows/ClassicSortArrowIcon.h>
#include <jcpp.h>

#undef BOLD
#undef BP_GROUPBOX
#undef BP_PUSHBUTTON
#undef CP_COMBOBOX
#undef DESKTOPFONTHINTS
#undef DIALOG
#undef DISABLED
#undef EAST
#undef EP_EDIT
#undef FALSE
#undef FILLCOLOR
#undef HI_RES_DISABLED_ICON_CLIENT_KEY
#undef HP_HEADERSORTARROW
#undef LBP_LISTBOX
#undef LVP_LISTVIEW
#undef MENU
#undef MONOSPACED
#undef NORTH
#undef NULL_VALUE
#undef PLAIN
#undef POPUP_MENU_BORDER
#undef SANS_SERIF
#undef SORTEDDOWN
#undef SORTEDUP
#undef SOUTH
#undef TEXTCOLOR
#undef TRUE
#undef TYPE_INT_ARGB
#undef WEST
#undef WINDOWS
#undef WINDOWS_7
#undef WINDOWS_95
#undef WINDOWS_VISTA
#undef WINDOWS_XP

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsBorders = ::com::sun::java::swing::plaf::windows::WindowsBorders;
using $WindowsClassicLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsClassicLookAndFeel;
using $WindowsDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty;
using $WindowsIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory;
using $WindowsIconFactory$VistaMenuItemCheckIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$VistaMenuItemCheckIconFactory;
using $WindowsInternalFrameTitlePane$ScalableIconUIResource = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane$ScalableIconUIResource;
using $WindowsLookAndFeel$1 = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$1;
using $WindowsLookAndFeel$2 = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$2;
using $WindowsLookAndFeel$ActiveWindowsIcon = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$ActiveWindowsIcon;
using $WindowsLookAndFeel$AudioAction = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$AudioAction;
using $WindowsLookAndFeel$FocusColorProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$FocusColorProperty;
using $WindowsLookAndFeel$FontDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$FontDesktopProperty;
using $WindowsLookAndFeel$LazyWindowsIcon = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$LazyWindowsIcon;
using $WindowsLookAndFeel$RGBGrayFilter = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$RGBGrayFilter;
using $WindowsLookAndFeel$SkinIcon = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$SkinIcon;
using $WindowsLookAndFeel$TriggerDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$TriggerDesktopProperty;
using $WindowsLookAndFeel$WindowsFontProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$WindowsFontProperty;
using $WindowsLookAndFeel$WindowsFontSizeProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$WindowsFontSizeProperty;
using $WindowsLookAndFeel$WindowsLayoutStyle = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$WindowsLayoutStyle;
using $WindowsLookAndFeel$XPBorderValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPBorderValue;
using $WindowsLookAndFeel$XPColorValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPColorValue;
using $WindowsLookAndFeel$XPDLUValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPDLUValue;
using $WindowsLookAndFeel$XPValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue;
using $WindowsPopupMenuUI = ::com::sun::java::swing::plaf::windows::WindowsPopupMenuUI;
using $WindowsRootPaneUI = ::com::sun::java::swing::plaf::windows::WindowsRootPaneUI;
using $WindowsTreeUI$CollapsedIcon = ::com::sun::java::swing::plaf::windows::WindowsTreeUI$CollapsedIcon;
using $WindowsTreeUI$ExpandedIcon = ::com::sun::java::swing::plaf::windows::WindowsTreeUI$ExpandedIcon;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $KeyEventPostProcessor = ::java::awt::KeyEventPostProcessor;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Toolkit = ::java::awt::Toolkit;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $FilteredImageSource = ::java::awt::image::FilteredImageSource;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $BorderFactory = ::javax::swing::BorderFactory;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $JTextField = ::javax::swing::JTextField;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicBorders = ::javax::swing::plaf::basic::BasicBorders;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;
using $OSInfo$WindowsVersion = ::sun::awt::OSInfo$WindowsVersion;
using $SunToolkit = ::sun::awt::SunToolkit;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $DefaultLayoutStyle = ::sun::swing::DefaultLayoutStyle;
using $ImageIconUIResource = ::sun::swing::ImageIconUIResource;
using $StringUIClientPropertyKey = ::sun::swing::StringUIClientPropertyKey;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$UIDefaultsAccessor = ::sun::swing::SwingAccessor$UIDefaultsAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $SortArrowIcon = ::sun::swing::icon::SortArrowIcon;
using $ClassicSortArrowIcon = ::sun::swing::plaf::windows::ClassicSortArrowIcon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$initComponentDefaults$0(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0::*)()>(&WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$initComponentDefaults$1(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::*)()>(&WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$initComponentDefaults$2(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::*)()>(&WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$initComponentDefaults$3(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::*)()>(&WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$initComponentDefaults$4(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::*)()>(&WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(WindowsLookAndFeel* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return $nc(inst$)->lambda$initComponentDefaults$5(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5>());
	}
	WindowsLookAndFeel* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, inst$)},
	{}
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::methodInfos[3] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::*)(WindowsLookAndFeel*)>(&WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$initVistaComponentDefaults$6(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6::*)()>(&WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$initVistaComponentDefaults$7(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7::*)()>(&WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$initVistaComponentDefaults$8(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8::*)()>(&WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$9(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$10(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$11(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$12(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$13(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$15(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$16(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$18(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$19(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$20(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$21(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$22(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$23(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$24(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$25(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$26(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$27(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$28(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$29(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return WindowsLookAndFeel::lambda$getLazyValueDefaults$31(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28::*)()>(&WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28::class$ = nullptr;

$FieldInfo _WindowsLookAndFeel_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsLookAndFeel, $assertionsDisabled)},
	{"HI_RES_DISABLED_ICON_CLIENT_KEY", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(WindowsLookAndFeel, HI_RES_DISABLED_ICON_CLIENT_KEY)},
	{"updatePending", "Z", nullptr, $PRIVATE, $field(WindowsLookAndFeel, updatePending)},
	{"useSystemFontSettings", "Z", nullptr, $PRIVATE, $field(WindowsLookAndFeel, useSystemFontSettings)},
	{"useSystemFontSizeSettings", "Z", nullptr, $PRIVATE, $field(WindowsLookAndFeel, useSystemFontSizeSettings)},
	{"themeActive", "Lcom/sun/java/swing/plaf/windows/WindowsDesktopProperty;", nullptr, $PRIVATE, $field(WindowsLookAndFeel, themeActive)},
	{"dllName", "Lcom/sun/java/swing/plaf/windows/WindowsDesktopProperty;", nullptr, $PRIVATE, $field(WindowsLookAndFeel, dllName)},
	{"colorName", "Lcom/sun/java/swing/plaf/windows/WindowsDesktopProperty;", nullptr, $PRIVATE, $field(WindowsLookAndFeel, colorName)},
	{"sizeName", "Lcom/sun/java/swing/plaf/windows/WindowsDesktopProperty;", nullptr, $PRIVATE, $field(WindowsLookAndFeel, sizeName)},
	{"aaSettings", "Lcom/sun/java/swing/plaf/windows/WindowsDesktopProperty;", nullptr, $PRIVATE, $field(WindowsLookAndFeel, aaSettings)},
	{"style", "Ljavax/swing/LayoutStyle;", nullptr, $PRIVATE | $TRANSIENT, $field(WindowsLookAndFeel, style)},
	{"baseUnitX", "I", nullptr, $PRIVATE, $field(WindowsLookAndFeel, baseUnitX)},
	{"baseUnitY", "I", nullptr, $PRIVATE, $field(WindowsLookAndFeel, baseUnitY)},
	{"isMnemonicHidden", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsLookAndFeel, isMnemonicHidden$)},
	{"isClassicWindows", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsLookAndFeel, isClassicWindows$)},
	{}
};

$MethodInfo _WindowsLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel::*)()>(&WindowsLookAndFeel::init$))},
	{"calculateBaseUnits", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsLookAndFeel::*)()>(&WindowsLookAndFeel::calculateBaseUnits))},
	{"createAudioAction", "(Ljava/lang/Object;)Ljavax/swing/Action;", nullptr, $PROTECTED},
	{"dluToPixels", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WindowsLookAndFeel::*)(int32_t,int32_t)>(&WindowsLookAndFeel::dluToPixels))},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDesktopFontValue", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(WindowsLookAndFeel::*)($String*,Object$*)>(&WindowsLookAndFeel::getDesktopFontValue))},
	{"getDisabledIcon", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLayoutStyle", "()Ljavax/swing/LayoutStyle;", nullptr, $PUBLIC},
	{"getLazyValueDefaults", "()[Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$ObjectArray*(WindowsLookAndFeel::*)()>(&WindowsLookAndFeel::getLazyValueDefaults))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"initClassDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initResourceBundle", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsLookAndFeel::*)($UIDefaults*)>(&WindowsLookAndFeel::initResourceBundle))},
	{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initVistaComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsLookAndFeel::*)($UIDefaults*)>(&WindowsLookAndFeel::initVistaComponentDefaults))},
	{"initialize", "()V", nullptr, $PUBLIC},
	{"isClassicWindows", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WindowsLookAndFeel::isClassicWindows))},
	{"isMnemonicHidden", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WindowsLookAndFeel::isMnemonicHidden))},
	{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"isOnVista", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&WindowsLookAndFeel::isOnVista))},
	{"isOnWindows7", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&WindowsLookAndFeel::isOnWindows7))},
	{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"lambda$getLazyValueDefaults$10", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$10))},
	{"lambda$getLazyValueDefaults$11", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$11))},
	{"lambda$getLazyValueDefaults$12", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$12))},
	{"lambda$getLazyValueDefaults$13", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$13))},
	{"lambda$getLazyValueDefaults$15", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$15))},
	{"lambda$getLazyValueDefaults$16", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$16))},
	{"lambda$getLazyValueDefaults$18", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$18))},
	{"lambda$getLazyValueDefaults$19", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$19))},
	{"lambda$getLazyValueDefaults$20", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$20))},
	{"lambda$getLazyValueDefaults$21", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$21))},
	{"lambda$getLazyValueDefaults$22", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$22))},
	{"lambda$getLazyValueDefaults$23", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$23))},
	{"lambda$getLazyValueDefaults$24", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$24))},
	{"lambda$getLazyValueDefaults$25", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$25))},
	{"lambda$getLazyValueDefaults$26", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$26))},
	{"lambda$getLazyValueDefaults$27", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$27))},
	{"lambda$getLazyValueDefaults$28", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$28))},
	{"lambda$getLazyValueDefaults$29", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$29))},
	{"lambda$getLazyValueDefaults$31", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$31))},
	{"lambda$getLazyValueDefaults$9", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$getLazyValueDefaults$9))},
	{"lambda$initComponentDefaults$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$initComponentDefaults$0))},
	{"lambda$initComponentDefaults$1", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$initComponentDefaults$1))},
	{"lambda$initComponentDefaults$2", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$initComponentDefaults$2))},
	{"lambda$initComponentDefaults$3", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$initComponentDefaults$3))},
	{"lambda$initComponentDefaults$4", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$initComponentDefaults$4))},
	{"lambda$initComponentDefaults$5", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(WindowsLookAndFeel::*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$initComponentDefaults$5))},
	{"lambda$initVistaComponentDefaults$6", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$initVistaComponentDefaults$6))},
	{"lambda$initVistaComponentDefaults$7", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$initVistaComponentDefaults$7))},
	{"lambda$initVistaComponentDefaults$8", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&WindowsLookAndFeel::lambda$initVistaComponentDefaults$8))},
	{"provideErrorFeedback", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"repaintRootPane", "(Ljava/awt/Component;)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*)>(&WindowsLookAndFeel::repaintRootPane))},
	{"setMnemonicHidden", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&WindowsLookAndFeel::setMnemonicHidden))},
	{"uninitialize", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsLookAndFeel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FocusColorProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "FocusColorProperty", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$RGBGrayFilter", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "RGBGrayFilter", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsLayoutStyle", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "WindowsLayoutStyle", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FontDesktopProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "FontDesktopProperty", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "TriggerDesktopProperty", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPDLUValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPDLUValue", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPColorValue", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPBorderValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPBorderValue", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPValue", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontSizeProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "WindowsFontSizeProperty", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "WindowsFontProperty", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$SkinIcon", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "SkinIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "ActiveWindowsIcon", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$LazyWindowsIcon", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "LazyWindowsIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$AudioAction", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "AudioAction", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsLookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel",
	"javax.swing.plaf.basic.BasicLookAndFeel",
	nullptr,
	_WindowsLookAndFeel_FieldInfo_,
	_WindowsLookAndFeel_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$3,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FocusColorProperty,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$RGBGrayFilter,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsLayoutStyle,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FontDesktopProperty,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPDLUValue,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue$XPColorValueKey,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPBorderValue,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontSizeProperty,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontProperty,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$SkinIcon,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon$1,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$LazyWindowsIcon,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$AudioAction,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$2,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$1"
};

$Object* allocate$WindowsLookAndFeel($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel));
}

bool WindowsLookAndFeel::$assertionsDisabled = false;
$Object* WindowsLookAndFeel::HI_RES_DISABLED_ICON_CLIENT_KEY = nullptr;
bool WindowsLookAndFeel::isMnemonicHidden$ = false;
bool WindowsLookAndFeel::isClassicWindows$ = false;

void WindowsLookAndFeel::init$() {
	$BasicLookAndFeel::init$();
	this->updatePending = false;
	this->useSystemFontSettings = true;
}

$String* WindowsLookAndFeel::getName() {
	return "Windows"_s;
}

$String* WindowsLookAndFeel::getDescription() {
	return "The Microsoft Windows Look and Feel"_s;
}

$String* WindowsLookAndFeel::getID() {
	return "Windows"_s;
}

bool WindowsLookAndFeel::isNativeLookAndFeel() {
	$init($OSInfo$OSType);
	return $OSInfo::getOSType() == $OSInfo$OSType::WINDOWS;
}

bool WindowsLookAndFeel::isSupportedLookAndFeel() {
	return isNativeLookAndFeel();
}

void WindowsLookAndFeel::initialize() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$BasicLookAndFeel::initialize();
	$init($OSInfo);
	if ($nc($($OSInfo::getWindowsVersion()))->compareTo($OSInfo::WINDOWS_95) <= 0) {
		WindowsLookAndFeel::isClassicWindows$ = true;
	} else {
		WindowsLookAndFeel::isClassicWindows$ = false;
		$XPStyle::invalidateStyle();
	}
	$var($String, systemFonts, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.useSystemFontSettings"_s)))));
	this->useSystemFontSettings = (systemFonts == nullptr || $nc($($Boolean::valueOf(systemFonts)))->booleanValue());
	if (this->useSystemFontSettings) {
		$var($Object, value, $UIManager::get("Application.useSystemFontSettings"_s));
		this->useSystemFontSettings = (value == nullptr || $nc($Boolean::TRUE)->equals(value));
	}
	$init($WindowsRootPaneUI);
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->addKeyEventPostProcessor($WindowsRootPaneUI::altProcessor);
}

void WindowsLookAndFeel::initClassDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$BasicLookAndFeel::initClassDefaults(table);
	$var($String, windowsPackageName, "com.sun.java.swing.plaf.windows."_s);
	$var($ObjectArray, uiDefaults, $new($ObjectArray, {
		$of("ButtonUI"_s),
		$of($$str({windowsPackageName, "WindowsButtonUI"_s})),
		$of("CheckBoxUI"_s),
		$of($$str({windowsPackageName, "WindowsCheckBoxUI"_s})),
		$of("CheckBoxMenuItemUI"_s),
		$of($$str({windowsPackageName, "WindowsCheckBoxMenuItemUI"_s})),
		$of("LabelUI"_s),
		$of($$str({windowsPackageName, "WindowsLabelUI"_s})),
		$of("RadioButtonUI"_s),
		$of($$str({windowsPackageName, "WindowsRadioButtonUI"_s})),
		$of("RadioButtonMenuItemUI"_s),
		$of($$str({windowsPackageName, "WindowsRadioButtonMenuItemUI"_s})),
		$of("ToggleButtonUI"_s),
		$of($$str({windowsPackageName, "WindowsToggleButtonUI"_s})),
		$of("ProgressBarUI"_s),
		$of($$str({windowsPackageName, "WindowsProgressBarUI"_s})),
		$of("SliderUI"_s),
		$of($$str({windowsPackageName, "WindowsSliderUI"_s})),
		$of("SeparatorUI"_s),
		$of($$str({windowsPackageName, "WindowsSeparatorUI"_s})),
		$of("SplitPaneUI"_s),
		$of($$str({windowsPackageName, "WindowsSplitPaneUI"_s})),
		$of("SpinnerUI"_s),
		$of($$str({windowsPackageName, "WindowsSpinnerUI"_s})),
		$of("TabbedPaneUI"_s),
		$of($$str({windowsPackageName, "WindowsTabbedPaneUI"_s})),
		$of("TextAreaUI"_s),
		$of($$str({windowsPackageName, "WindowsTextAreaUI"_s})),
		$of("TextFieldUI"_s),
		$of($$str({windowsPackageName, "WindowsTextFieldUI"_s})),
		$of("PasswordFieldUI"_s),
		$of($$str({windowsPackageName, "WindowsPasswordFieldUI"_s})),
		$of("TextPaneUI"_s),
		$of($$str({windowsPackageName, "WindowsTextPaneUI"_s})),
		$of("EditorPaneUI"_s),
		$of($$str({windowsPackageName, "WindowsEditorPaneUI"_s})),
		$of("TreeUI"_s),
		$of($$str({windowsPackageName, "WindowsTreeUI"_s})),
		$of("ToolBarUI"_s),
		$of($$str({windowsPackageName, "WindowsToolBarUI"_s})),
		$of("ToolBarSeparatorUI"_s),
		$of($$str({windowsPackageName, "WindowsToolBarSeparatorUI"_s})),
		$of("ComboBoxUI"_s),
		$of($$str({windowsPackageName, "WindowsComboBoxUI"_s})),
		$of("TableHeaderUI"_s),
		$of($$str({windowsPackageName, "WindowsTableHeaderUI"_s})),
		$of("InternalFrameUI"_s),
		$of($$str({windowsPackageName, "WindowsInternalFrameUI"_s})),
		$of("DesktopPaneUI"_s),
		$of($$str({windowsPackageName, "WindowsDesktopPaneUI"_s})),
		$of("DesktopIconUI"_s),
		$of($$str({windowsPackageName, "WindowsDesktopIconUI"_s})),
		$of("FileChooserUI"_s),
		$of($$str({windowsPackageName, "WindowsFileChooserUI"_s})),
		$of("MenuUI"_s),
		$of($$str({windowsPackageName, "WindowsMenuUI"_s})),
		$of("MenuItemUI"_s),
		$of($$str({windowsPackageName, "WindowsMenuItemUI"_s})),
		$of("MenuBarUI"_s),
		$of($$str({windowsPackageName, "WindowsMenuBarUI"_s})),
		$of("PopupMenuUI"_s),
		$of($$str({windowsPackageName, "WindowsPopupMenuUI"_s})),
		$of("PopupMenuSeparatorUI"_s),
		$of($$str({windowsPackageName, "WindowsPopupMenuSeparatorUI"_s})),
		$of("ScrollBarUI"_s),
		$of($$str({windowsPackageName, "WindowsScrollBarUI"_s})),
		$of("RootPaneUI"_s),
		$of($$str({windowsPackageName, "WindowsRootPaneUI"_s}))
	}));
	$nc(table)->putDefaults(uiDefaults);
}

void WindowsLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
	$var($StringArray, defaultSystemColors, $new($StringArray, {
		"desktop"_s,
		"#005C5C"_s,
		"activeCaption"_s,
		"#000080"_s,
		"activeCaptionText"_s,
		"#FFFFFF"_s,
		"activeCaptionBorder"_s,
		"#C0C0C0"_s,
		"inactiveCaption"_s,
		"#808080"_s,
		"inactiveCaptionText"_s,
		"#C0C0C0"_s,
		"inactiveCaptionBorder"_s,
		"#C0C0C0"_s,
		"window"_s,
		"#FFFFFF"_s,
		"windowBorder"_s,
		"#000000"_s,
		"windowText"_s,
		"#000000"_s,
		"menu"_s,
		"#C0C0C0"_s,
		"menuPressedItemB"_s,
		"#000080"_s,
		"menuPressedItemF"_s,
		"#FFFFFF"_s,
		"menuText"_s,
		"#000000"_s,
		"text"_s,
		"#C0C0C0"_s,
		"textText"_s,
		"#000000"_s,
		"textHighlight"_s,
		"#000080"_s,
		"textHighlightText"_s,
		"#FFFFFF"_s,
		"textInactiveText"_s,
		"#808080"_s,
		"control"_s,
		"#C0C0C0"_s,
		"controlText"_s,
		"#000000"_s,
		"controlHighlight"_s,
		"#C0C0C0"_s,
		"controlLtHighlight"_s,
		"#FFFFFF"_s,
		"controlShadow"_s,
		"#808080"_s,
		"controlDkShadow"_s,
		"#000000"_s,
		"scrollbar"_s,
		"#E0E0E0"_s,
		"info"_s,
		"#FFFFE1"_s,
		"infoText"_s,
		"#000000"_s
	}));
	loadSystemColors(table, defaultSystemColors, isNativeLookAndFeel());
}

void WindowsLookAndFeel::initResourceBundle($UIDefaults* table) {
	$nc($($SwingAccessor::getUIDefaultsAccessor()))->addInternalBundle(table, "com.sun.java.swing.plaf.windows.resources.windows"_s);
}

void WindowsLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$BasicLookAndFeel::initComponentDefaults(table);
	initResourceBundle(table);
	$var($UIDefaults$LazyValue, dialogPlain12, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0)));
	$var($UIDefaults$LazyValue, sansSerifPlain12, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1)));
	$var($UIDefaults$LazyValue, monospacedPlain12, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2)));
	$var($UIDefaults$LazyValue, dialogBold12, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3)));
	$init($Color);
	$var($ColorUIResource, red, $new($ColorUIResource, $Color::red));
	$var($ColorUIResource, black, $new($ColorUIResource, $Color::black));
	$var($ColorUIResource, white, $new($ColorUIResource, $Color::white));
	$var($ColorUIResource, gray, $new($ColorUIResource, $Color::gray));
	$var($ColorUIResource, darkGray, $new($ColorUIResource, $Color::darkGray));
	$var($ColorUIResource, scrollBarTrackHighlight, darkGray);
	$init($OSInfo);
	WindowsLookAndFeel::isClassicWindows$ = $nc($($OSInfo::getWindowsVersion()))->compareTo($OSInfo::WINDOWS_95) <= 0;
	$var($Object, treeExpandedIcon, $WindowsTreeUI$ExpandedIcon::createExpandedIcon());
	$var($Object, treeCollapsedIcon, $WindowsTreeUI$CollapsedIcon::createCollapsedIcon());
	$init($DefaultEditorKit);
	$init($JTextField);
	$var($Object, fieldInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("control C"_s),
		$of($DefaultEditorKit::copyAction),
		$of("control V"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("control X"_s),
		$of($DefaultEditorKit::cutAction),
		$of("COPY"_s),
		$of($DefaultEditorKit::copyAction),
		$of("PASTE"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("CUT"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control INSERT"_s),
		$of($DefaultEditorKit::copyAction),
		$of("shift INSERT"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("shift DELETE"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control A"_s),
		$of($DefaultEditorKit::selectAllAction),
		$of("control BACK_SLASH"_s),
		$of("unselect"_s),
		$of("shift LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("control LEFT"_s),
		$of($DefaultEditorKit::previousWordAction),
		$of("control RIGHT"_s),
		$of($DefaultEditorKit::nextWordAction),
		$of("control shift LEFT"_s),
		$of($DefaultEditorKit::selectionPreviousWordAction),
		$of("control shift RIGHT"_s),
		$of($DefaultEditorKit::selectionNextWordAction),
		$of("HOME"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("END"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("shift END"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("shift BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("ctrl H"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("DELETE"_s),
		$of($DefaultEditorKit::deleteNextCharAction),
		$of("ctrl DELETE"_s),
		$of($DefaultEditorKit::deleteNextWordAction),
		$of("ctrl BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevWordAction),
		$of("RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("KP_RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("KP_LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("ENTER"_s),
		$of($JTextField::notifyAction),
		$of("control shift O"_s),
		$of("toggle-componentOrientation"_s)
	})));
	$var($Object, passwordInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("control C"_s),
		$of($DefaultEditorKit::copyAction),
		$of("control V"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("control X"_s),
		$of($DefaultEditorKit::cutAction),
		$of("COPY"_s),
		$of($DefaultEditorKit::copyAction),
		$of("PASTE"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("CUT"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control INSERT"_s),
		$of($DefaultEditorKit::copyAction),
		$of("shift INSERT"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("shift DELETE"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control A"_s),
		$of($DefaultEditorKit::selectAllAction),
		$of("control BACK_SLASH"_s),
		$of("unselect"_s),
		$of("shift LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("control LEFT"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("control RIGHT"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("control shift LEFT"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("control shift RIGHT"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("HOME"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("END"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("shift END"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("shift BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("ctrl H"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("DELETE"_s),
		$of($DefaultEditorKit::deleteNextCharAction),
		$of("RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("KP_RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("KP_LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("ENTER"_s),
		$of($JTextField::notifyAction),
		$of("control shift O"_s),
		$of("toggle-componentOrientation"_s)
	})));
	$var($Object, multilineInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("control C"_s),
		$of($DefaultEditorKit::copyAction),
		$of("control V"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("control X"_s),
		$of($DefaultEditorKit::cutAction),
		$of("COPY"_s),
		$of($DefaultEditorKit::copyAction),
		$of("PASTE"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("CUT"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control INSERT"_s),
		$of($DefaultEditorKit::copyAction),
		$of("shift INSERT"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("shift DELETE"_s),
		$of($DefaultEditorKit::cutAction),
		$of("shift LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("control LEFT"_s),
		$of($DefaultEditorKit::previousWordAction),
		$of("control RIGHT"_s),
		$of($DefaultEditorKit::nextWordAction),
		$of("control shift LEFT"_s),
		$of($DefaultEditorKit::selectionPreviousWordAction),
		$of("control shift RIGHT"_s),
		$of($DefaultEditorKit::selectionNextWordAction),
		$of("control A"_s),
		$of($DefaultEditorKit::selectAllAction),
		$of("control BACK_SLASH"_s),
		$of("unselect"_s),
		$of("HOME"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("END"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("shift END"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("control HOME"_s),
		$of($DefaultEditorKit::beginAction),
		$of("control END"_s),
		$of($DefaultEditorKit::endAction),
		$of("control shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginAction),
		$of("control shift END"_s),
		$of($DefaultEditorKit::selectionEndAction),
		$of("UP"_s),
		$of($DefaultEditorKit::upAction),
		$of("DOWN"_s),
		$of($DefaultEditorKit::downAction),
		$of("BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("shift BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("ctrl H"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("DELETE"_s),
		$of($DefaultEditorKit::deleteNextCharAction),
		$of("ctrl DELETE"_s),
		$of($DefaultEditorKit::deleteNextWordAction),
		$of("ctrl BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevWordAction),
		$of("RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("KP_RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("KP_LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("PAGE_UP"_s),
		$of($DefaultEditorKit::pageUpAction),
		$of("PAGE_DOWN"_s),
		$of($DefaultEditorKit::pageDownAction),
		$of("shift PAGE_UP"_s),
		$of("selection-page-up"_s),
		$of("shift PAGE_DOWN"_s),
		$of("selection-page-down"_s),
		$of("ctrl shift PAGE_UP"_s),
		$of("selection-page-left"_s),
		$of("ctrl shift PAGE_DOWN"_s),
		$of("selection-page-right"_s),
		$of("shift UP"_s),
		$of($DefaultEditorKit::selectionUpAction),
		$of("shift DOWN"_s),
		$of($DefaultEditorKit::selectionDownAction),
		$of("ENTER"_s),
		$of($DefaultEditorKit::insertBreakAction),
		$of("TAB"_s),
		$of($DefaultEditorKit::insertTabAction),
		$of("control T"_s),
		$of("next-link-action"_s),
		$of("control shift T"_s),
		$of("previous-link-action"_s),
		$of("control SPACE"_s),
		$of("activate-link-action"_s),
		$of("control shift O"_s),
		$of("toggle-componentOrientation"_s)
	})));
	$var($Object, menuItemAcceleratorDelimiter, "+"_s);
	$var($Object, ControlBackgroundColor, $new($WindowsDesktopProperty, "win.3d.backgroundColor"_s, $($nc(table)->get("control"_s))));
	$var($Object, ControlLightColor, $new($WindowsDesktopProperty, "win.3d.lightColor"_s, $($nc(table)->get("controlHighlight"_s))));
	$var($Object, ControlHighlightColor, $new($WindowsDesktopProperty, "win.3d.highlightColor"_s, $($nc(table)->get("controlLtHighlight"_s))));
	$var($Object, ControlShadowColor, $new($WindowsDesktopProperty, "win.3d.shadowColor"_s, $($nc(table)->get("controlShadow"_s))));
	$var($Object, ControlDarkShadowColor, $new($WindowsDesktopProperty, "win.3d.darkShadowColor"_s, $($nc(table)->get("controlDkShadow"_s))));
	$var($Object, ControlTextColor, $new($WindowsDesktopProperty, "win.button.textColor"_s, $($nc(table)->get("controlText"_s))));
	$var($Object, MenuBackgroundColor, $new($WindowsDesktopProperty, "win.menu.backgroundColor"_s, $($nc(table)->get("menu"_s))));
	$var($Object, MenuBarBackgroundColor, $new($WindowsDesktopProperty, "win.menubar.backgroundColor"_s, $($nc(table)->get("menu"_s))));
	$var($Object, MenuTextColor, $new($WindowsDesktopProperty, "win.menu.textColor"_s, $($nc(table)->get("menuText"_s))));
	$var($Object, SelectionBackgroundColor, $new($WindowsDesktopProperty, "win.item.highlightColor"_s, $($nc(table)->get("textHighlight"_s))));
	$var($Object, SelectionTextColor, $new($WindowsDesktopProperty, "win.item.highlightTextColor"_s, $($nc(table)->get("textHighlightText"_s))));
	$var($Object, WindowBackgroundColor, $new($WindowsDesktopProperty, "win.frame.backgroundColor"_s, $($nc(table)->get("window"_s))));
	$var($Object, WindowTextColor, $new($WindowsDesktopProperty, "win.frame.textColor"_s, $($nc(table)->get("windowText"_s))));
	$var($Object, WindowBorderWidth, $new($WindowsDesktopProperty, "win.frame.sizingBorderWidth"_s, $($Integer::valueOf(1))));
	$var($Object, TitlePaneHeight, $new($WindowsDesktopProperty, "win.frame.captionHeight"_s, $($Integer::valueOf(18))));
	$var($Object, TitleButtonWidth, $new($WindowsDesktopProperty, "win.frame.captionButtonWidth"_s, $($Integer::valueOf(16))));
	$var($Object, TitleButtonHeight, $new($WindowsDesktopProperty, "win.frame.captionButtonHeight"_s, $($Integer::valueOf(16))));
	$var($Object, InactiveTextColor, $new($WindowsDesktopProperty, "win.text.grayedTextColor"_s, $($nc(table)->get("textInactiveText"_s))));
	$var($Object, ScrollbarBackgroundColor, $new($WindowsDesktopProperty, "win.scrollbar.backgroundColor"_s, $($nc(table)->get("scrollbar"_s))));
	$var($Object, buttonFocusColor, $new($WindowsLookAndFeel$FocusColorProperty));
	$init($TMSchema$Part);
	$init($TMSchema$Prop);
	$var($Object, TextBackground, $new($WindowsLookAndFeel$XPColorValue, $TMSchema$Part::EP_EDIT, nullptr, $TMSchema$Prop::FILLCOLOR, WindowBackgroundColor));
	$var($Object, ReadOnlyTextBackground, ControlBackgroundColor);
	$var($Object, DisabledTextBackground, ControlBackgroundColor);
	$var($Object, MenuFont, dialogPlain12);
	$var($Object, FixedControlFont, monospacedPlain12);
	$var($Object, ControlFont, dialogPlain12);
	$var($Object, MessageFont, dialogPlain12);
	$var($Object, WindowFont, dialogBold12);
	$var($Object, ToolTipFont, sansSerifPlain12);
	$var($Object, IconFont, ControlFont);
	$var($Object, scrollBarWidth, $new($WindowsDesktopProperty, "win.scrollbar.width"_s, $($Integer::valueOf(16))));
	$var($Object, menuBarHeight, $new($WindowsDesktopProperty, "win.menu.height"_s, nullptr));
	$var($Object, hotTrackingOn, $new($WindowsDesktopProperty, "win.item.hotTrackingOn"_s, $($Boolean::valueOf(true))));
	$var($Object, showMnemonics, $new($WindowsDesktopProperty, "win.menu.keyboardCuesOn"_s, $Boolean::TRUE));
	if (this->useSystemFontSettings) {
		$assign(MenuFont, getDesktopFontValue("win.menu.font"_s, MenuFont));
		$assign(FixedControlFont, getDesktopFontValue("win.ansiFixed.font"_s, FixedControlFont));
		$assign(ControlFont, getDesktopFontValue("win.defaultGUI.font"_s, ControlFont));
		$assign(MessageFont, getDesktopFontValue("win.messagebox.font"_s, MessageFont));
		$assign(WindowFont, getDesktopFontValue("win.frame.captionFont"_s, WindowFont));
		$assign(IconFont, getDesktopFontValue("win.icon.font"_s, IconFont));
		$assign(ToolTipFont, getDesktopFontValue("win.tooltip.font"_s, ToolTipFont));
		$SwingUtilities2::putAATextInfo(true, table);
		$init($SunToolkit);
		$set(this, aaSettings, $new($WindowsLookAndFeel$FontDesktopProperty, this, $SunToolkit::DESKTOPFONTHINTS));
	}
	if (this->useSystemFontSizeSettings) {
		$init($Font);
		$assign(MenuFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.menu.font.height"_s, $Font::DIALOG, $Font::PLAIN, 12));
		$assign(FixedControlFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.ansiFixed.font.height"_s, $Font::MONOSPACED, $Font::PLAIN, 12));
		$assign(ControlFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.defaultGUI.font.height"_s, $Font::DIALOG, $Font::PLAIN, 12));
		$assign(MessageFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.messagebox.font.height"_s, $Font::DIALOG, $Font::PLAIN, 12));
		$assign(WindowFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.frame.captionFont.height"_s, $Font::DIALOG, $Font::BOLD, 12));
		$assign(ToolTipFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.tooltip.font.height"_s, $Font::SANS_SERIF, $Font::PLAIN, 12));
		$assign(IconFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.icon.font.height"_s, $Font::DIALOG, $Font::PLAIN, 12));
	}
	bool var$0 = !($instanceOf($WindowsClassicLookAndFeel, this));
	if (var$0) {
		$init($OSInfo$OSType);
		bool var$1 = $OSInfo::getOSType() == $OSInfo$OSType::WINDOWS;
		var$0 = (var$1 && $nc($($OSInfo::getWindowsVersion()))->compareTo($OSInfo::WINDOWS_XP) >= 0);
	}
	if (var$0) {
		$var($String, prop, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.noxp"_s)))));
		if (prop == nullptr) {
			$set(this, themeActive, $new($WindowsLookAndFeel$TriggerDesktopProperty, this, "win.xpstyle.themeActive"_s));
			$set(this, dllName, $new($WindowsLookAndFeel$TriggerDesktopProperty, this, "win.xpstyle.dllName"_s));
			$set(this, colorName, $new($WindowsLookAndFeel$TriggerDesktopProperty, this, "win.xpstyle.colorName"_s));
			$set(this, sizeName, $new($WindowsLookAndFeel$TriggerDesktopProperty, this, "win.xpstyle.sizeName"_s));
		}
	}
	$var($Object, var$2, $of($Integer::valueOf(3)));
	$var($Object, var$3, $of($Integer::valueOf(3)));
	$var($Object, var$4, $of($Integer::valueOf(6)));
	$var($Object, var$5, $of($Integer::valueOf(6)));
	$var($Object, var$6, $of($Integer::valueOf(0)));
	$var($Object, var$7, $of($new($EmptyBorder, 1, 3, 1, 1)));
	$init($TMSchema$State);
	$var($Object, var$8, $of($Character::valueOf((char16_t)9679)));
	$var($Object, var$9, $of($new($InsetsUIResource, 1, 4, 1, 4)));
	$var($Object, var$10, $of($new($InsetsUIResource, 3, 2, 2, 2)));
	$init($WindowsLookAndFeel$XPValue);
	$var($ObjectArray, defaults, $new($ObjectArray, {
		$of("AuditoryCues.playList"_s),
		($Object*)nullptr,
		$of("Application.useSystemFontSettings"_s),
		$($of($Boolean::valueOf(this->useSystemFontSettings))),
		$of("TextField.focusInputMap"_s),
		fieldInputMap,
		$of("PasswordField.focusInputMap"_s),
		passwordInputMap,
		$of("TextArea.focusInputMap"_s),
		multilineInputMap,
		$of("TextPane.focusInputMap"_s),
		multilineInputMap,
		$of("EditorPane.focusInputMap"_s),
		multilineInputMap,
		$of("Button.font"_s),
		ControlFont,
		$of("Button.background"_s),
		ControlBackgroundColor,
		$of("Button.foreground"_s),
		ControlTextColor,
		$of("Button.shadow"_s),
		ControlShadowColor,
		$of("Button.darkShadow"_s),
		ControlDarkShadowColor,
		$of("Button.light"_s),
		ControlLightColor,
		$of("Button.highlight"_s),
		ControlHighlightColor,
		$of("Button.disabledForeground"_s),
		InactiveTextColor,
		$of("Button.disabledShadow"_s),
		ControlHighlightColor,
		$of("Button.focus"_s),
		buttonFocusColor,
		$of("Button.dashedRectGapX"_s),
		$of($$new($WindowsLookAndFeel$XPValue, var$2, $($Integer::valueOf(5)))),
		$of("Button.dashedRectGapY"_s),
		$of($$new($WindowsLookAndFeel$XPValue, var$3, $($Integer::valueOf(4)))),
		$of("Button.dashedRectGapWidth"_s),
		$of($$new($WindowsLookAndFeel$XPValue, var$4, $($Integer::valueOf(10)))),
		$of("Button.dashedRectGapHeight"_s),
		$of($$new($WindowsLookAndFeel$XPValue, var$5, $($Integer::valueOf(8)))),
		$of("Button.textShiftOffset"_s),
		$of($$new($WindowsLookAndFeel$XPValue, var$6, $($Integer::valueOf(1)))),
		$of("Button.showMnemonics"_s),
		showMnemonics,
		$of("Button.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("Caret.width"_s),
		$of($$new($WindowsDesktopProperty, "win.caret.width"_s, nullptr)),
		$of("CheckBox.font"_s),
		ControlFont,
		$of("CheckBox.interiorBackground"_s),
		WindowBackgroundColor,
		$of("CheckBox.background"_s),
		ControlBackgroundColor,
		$of("CheckBox.foreground"_s),
		WindowTextColor,
		$of("CheckBox.shadow"_s),
		ControlShadowColor,
		$of("CheckBox.darkShadow"_s),
		ControlDarkShadowColor,
		$of("CheckBox.light"_s),
		ControlLightColor,
		$of("CheckBox.highlight"_s),
		ControlHighlightColor,
		$of("CheckBox.focus"_s),
		buttonFocusColor,
		$of("CheckBox.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("CheckBox.totalInsets"_s),
		$of($$new($Insets, 4, 4, 4, 4)),
		$of("CheckBoxMenuItem.font"_s),
		MenuFont,
		$of("CheckBoxMenuItem.background"_s),
		MenuBackgroundColor,
		$of("CheckBoxMenuItem.foreground"_s),
		MenuTextColor,
		$of("CheckBoxMenuItem.selectionForeground"_s),
		SelectionTextColor,
		$of("CheckBoxMenuItem.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("CheckBoxMenuItem.acceleratorForeground"_s),
		MenuTextColor,
		$of("CheckBoxMenuItem.acceleratorSelectionForeground"_s),
		SelectionTextColor,
		$of("CheckBoxMenuItem.commandSound"_s),
		$of("win.sound.menuCommand"_s),
		$of("ComboBox.font"_s),
		ControlFont,
		$of("ComboBox.background"_s),
		WindowBackgroundColor,
		$of("ComboBox.foreground"_s),
		WindowTextColor,
		$of("ComboBox.buttonBackground"_s),
		ControlBackgroundColor,
		$of("ComboBox.buttonShadow"_s),
		ControlShadowColor,
		$of("ComboBox.buttonDarkShadow"_s),
		ControlDarkShadowColor,
		$of("ComboBox.buttonHighlight"_s),
		ControlHighlightColor,
		$of("ComboBox.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("ComboBox.selectionForeground"_s),
		SelectionTextColor,
		$of("ComboBox.editorBorder"_s),
		$of($$new($WindowsLookAndFeel$XPValue, var$7, $$new($EmptyBorder, 1, 3, 1, 4))),
		$of("ComboBox.disabledBackground"_s),
		$of($$new($WindowsLookAndFeel$XPColorValue, $TMSchema$Part::CP_COMBOBOX, $TMSchema$State::DISABLED, $TMSchema$Prop::FILLCOLOR, DisabledTextBackground)),
		$of("ComboBox.disabledForeground"_s),
		$of($$new($WindowsLookAndFeel$XPColorValue, $TMSchema$Part::CP_COMBOBOX, $TMSchema$State::DISABLED, $TMSchema$Prop::TEXTCOLOR, InactiveTextColor)),
		$of("ComboBox.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("hidePopup"_s),
			$of("PAGE_UP"_s),
			$of("pageUpPassThrough"_s),
			$of("PAGE_DOWN"_s),
			$of("pageDownPassThrough"_s),
			$of("HOME"_s),
			$of("homePassThrough"_s),
			$of("END"_s),
			$of("endPassThrough"_s),
			$of("DOWN"_s),
			$of("selectNext2"_s),
			$of("KP_DOWN"_s),
			$of("selectNext2"_s),
			$of("UP"_s),
			$of("selectPrevious2"_s),
			$of("KP_UP"_s),
			$of("selectPrevious2"_s),
			$of("ENTER"_s),
			$of("enterPressed"_s),
			$of("F4"_s),
			$of("togglePopup"_s),
			$of("alt DOWN"_s),
			$of("togglePopup"_s),
			$of("alt KP_DOWN"_s),
			$of("togglePopup"_s),
			$of("alt UP"_s),
			$of("togglePopup"_s),
			$of("alt KP_UP"_s),
			$of("togglePopup"_s)
		}))),
		$of("Desktop.background"_s),
		$of($$new($WindowsDesktopProperty, "win.mdi.backgroundColor"_s, $($nc(table)->get("desktop"_s)))),
		$of("Desktop.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl F5"_s),
			$of("restore"_s),
			$of("ctrl F4"_s),
			$of("close"_s),
			$of("ctrl F7"_s),
			$of("move"_s),
			$of("ctrl F8"_s),
			$of("resize"_s),
			$of("RIGHT"_s),
			$of("right"_s),
			$of("KP_RIGHT"_s),
			$of("right"_s),
			$of("LEFT"_s),
			$of("left"_s),
			$of("KP_LEFT"_s),
			$of("left"_s),
			$of("UP"_s),
			$of("up"_s),
			$of("KP_UP"_s),
			$of("up"_s),
			$of("DOWN"_s),
			$of("down"_s),
			$of("KP_DOWN"_s),
			$of("down"_s),
			$of("ESCAPE"_s),
			$of("escape"_s),
			$of("ctrl F9"_s),
			$of("minimize"_s),
			$of("ctrl F10"_s),
			$of("maximize"_s),
			$of("ctrl F6"_s),
			$of("selectNextFrame"_s),
			$of("ctrl TAB"_s),
			$of("selectNextFrame"_s),
			$of("ctrl alt F6"_s),
			$of("selectNextFrame"_s),
			$of("shift ctrl alt F6"_s),
			$of("selectPreviousFrame"_s),
			$of("ctrl F12"_s),
			$of("navigateNext"_s),
			$of("shift ctrl F12"_s),
			$of("navigatePrevious"_s)
		}))),
		$of("DesktopIcon.width"_s),
		$($of($Integer::valueOf(160))),
		$of("EditorPane.font"_s),
		ControlFont,
		$of("EditorPane.background"_s),
		WindowBackgroundColor,
		$of("EditorPane.foreground"_s),
		WindowTextColor,
		$of("EditorPane.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("EditorPane.selectionForeground"_s),
		SelectionTextColor,
		$of("EditorPane.caretForeground"_s),
		WindowTextColor,
		$of("EditorPane.inactiveForeground"_s),
		InactiveTextColor,
		$of("EditorPane.inactiveBackground"_s),
		WindowBackgroundColor,
		$of("EditorPane.disabledBackground"_s),
		DisabledTextBackground,
		$of("FileChooser.homeFolderIcon"_s),
		$of($$new($WindowsLookAndFeel$LazyWindowsIcon, nullptr, "icons/HomeFolder.gif"_s)),
		$of("FileChooser.listFont"_s),
		IconFont,
		$of("FileChooser.listViewBackground"_s),
		$of($$new($WindowsLookAndFeel$XPColorValue, $TMSchema$Part::LVP_LISTVIEW, nullptr, $TMSchema$Prop::FILLCOLOR, WindowBackgroundColor)),
		$of("FileChooser.listViewBorder"_s),
		$of($$new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::LVP_LISTVIEW, static_cast<$UIDefaults$LazyValue*>($$new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4)))),
		$of("FileChooser.listViewIcon"_s),
		$of($$new($WindowsLookAndFeel$LazyWindowsIcon, "fileChooserIcon ListView"_s, "icons/ListView.gif"_s)),
		$of("FileChooser.listViewWindowsStyle"_s),
		$of($Boolean::TRUE),
		$of("FileChooser.detailsViewIcon"_s),
		$of($$new($WindowsLookAndFeel$LazyWindowsIcon, "fileChooserIcon DetailsView"_s, "icons/DetailsView.gif"_s)),
		$of("FileChooser.viewMenuIcon"_s),
		$of($$new($WindowsLookAndFeel$LazyWindowsIcon, "fileChooserIcon ViewMenu"_s, "icons/ListView.gif"_s)),
		$of("FileChooser.upFolderIcon"_s),
		$of($$new($WindowsLookAndFeel$LazyWindowsIcon, "fileChooserIcon UpFolder"_s, "icons/UpFolder.gif"_s)),
		$of("FileChooser.newFolderIcon"_s),
		$of($$new($WindowsLookAndFeel$LazyWindowsIcon, "fileChooserIcon NewFolder"_s, "icons/NewFolder.gif"_s)),
		$of("FileChooser.useSystemExtensionHiding"_s),
		$of($Boolean::TRUE),
		$of("FileChooser.usesSingleFilePane"_s),
		$of($Boolean::TRUE),
		$of("FileChooser.noPlacesBar"_s),
		$of($$new($WindowsDesktopProperty, "win.comdlg.noPlacesBar"_s, $Boolean::FALSE)),
		$of("FileChooser.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("cancelSelection"_s),
			$of("F2"_s),
			$of("editFileName"_s),
			$of("F5"_s),
			$of("refresh"_s),
			$of("BACK_SPACE"_s),
			$of("Go Up"_s)
		}))),
		$of("FileView.directoryIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/Directory.gif"_s)),
		$of("FileView.fileIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/File.gif"_s)),
		$of("FileView.computerIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/Computer.gif"_s)),
		$of("FileView.hardDriveIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/HardDrive.gif"_s)),
		$of("FileView.floppyDriveIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/FloppyDrive.gif"_s)),
		$of("FormattedTextField.font"_s),
		ControlFont,
		$of("InternalFrame.titleFont"_s),
		WindowFont,
		$of("InternalFrame.titlePaneHeight"_s),
		TitlePaneHeight,
		$of("InternalFrame.titleButtonWidth"_s),
		TitleButtonWidth,
		$of("InternalFrame.titleButtonHeight"_s),
		TitleButtonHeight,
		$of("InternalFrame.titleButtonToolTipsOn"_s),
		hotTrackingOn,
		$of("InternalFrame.borderColor"_s),
		ControlBackgroundColor,
		$of("InternalFrame.borderShadow"_s),
		ControlShadowColor,
		$of("InternalFrame.borderDarkShadow"_s),
		ControlDarkShadowColor,
		$of("InternalFrame.borderHighlight"_s),
		ControlHighlightColor,
		$of("InternalFrame.borderLight"_s),
		ControlLightColor,
		$of("InternalFrame.borderWidth"_s),
		WindowBorderWidth,
		$of("InternalFrame.minimizeIconBackground"_s),
		ControlBackgroundColor,
		$of("InternalFrame.resizeIconHighlight"_s),
		ControlLightColor,
		$of("InternalFrame.resizeIconShadow"_s),
		ControlShadowColor,
		$of("InternalFrame.activeBorderColor"_s),
		$of($$new($WindowsDesktopProperty, "win.frame.activeBorderColor"_s, $($nc(table)->get("windowBorder"_s)))),
		$of("InternalFrame.inactiveBorderColor"_s),
		$of($$new($WindowsDesktopProperty, "win.frame.inactiveBorderColor"_s, $($nc(table)->get("windowBorder"_s)))),
		$of("InternalFrame.activeTitleBackground"_s),
		$of($$new($WindowsDesktopProperty, "win.frame.activeCaptionColor"_s, $($nc(table)->get("activeCaption"_s)))),
		$of("InternalFrame.activeTitleGradient"_s),
		$of($$new($WindowsDesktopProperty, "win.frame.activeCaptionGradientColor"_s, $($nc(table)->get("activeCaption"_s)))),
		$of("InternalFrame.activeTitleForeground"_s),
		$of($$new($WindowsDesktopProperty, "win.frame.captionTextColor"_s, $($nc(table)->get("activeCaptionText"_s)))),
		$of("InternalFrame.inactiveTitleBackground"_s),
		$of($$new($WindowsDesktopProperty, "win.frame.inactiveCaptionColor"_s, $($nc(table)->get("inactiveCaption"_s)))),
		$of("InternalFrame.inactiveTitleGradient"_s),
		$of($$new($WindowsDesktopProperty, "win.frame.inactiveCaptionGradientColor"_s, $($nc(table)->get("inactiveCaption"_s)))),
		$of("InternalFrame.inactiveTitleForeground"_s),
		$of($$new($WindowsDesktopProperty, "win.frame.inactiveCaptionTextColor"_s, $($nc(table)->get("inactiveCaptionText"_s)))),
		$of("InternalFrame.maximizeIcon"_s),
		$($of($WindowsIconFactory::createFrameMaximizeIcon())),
		$of("InternalFrame.minimizeIcon"_s),
		$($of($WindowsIconFactory::createFrameMinimizeIcon())),
		$of("InternalFrame.iconifyIcon"_s),
		$($of($WindowsIconFactory::createFrameIconifyIcon())),
		$of("InternalFrame.closeIcon"_s),
		$($of($WindowsIconFactory::createFrameCloseIcon())),
		$of("InternalFrame.icon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, this)),
		$of("InternalFrame.closeSound"_s),
		$of("win.sound.close"_s),
		$of("InternalFrame.maximizeSound"_s),
		$of("win.sound.maximize"_s),
		$of("InternalFrame.minimizeSound"_s),
		$of("win.sound.minimize"_s),
		$of("InternalFrame.restoreDownSound"_s),
		$of("win.sound.restoreDown"_s),
		$of("InternalFrame.restoreUpSound"_s),
		$of("win.sound.restoreUp"_s),
		$of("InternalFrame.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("shift ESCAPE"_s),
			$of("showSystemMenu"_s),
			$of("ctrl SPACE"_s),
			$of("showSystemMenu"_s),
			$of("ESCAPE"_s),
			$of("hideSystemMenu"_s)
		})),
		$of("Label.font"_s),
		ControlFont,
		$of("Label.background"_s),
		ControlBackgroundColor,
		$of("Label.foreground"_s),
		WindowTextColor,
		$of("Label.disabledForeground"_s),
		InactiveTextColor,
		$of("Label.disabledShadow"_s),
		ControlHighlightColor,
		$of("List.font"_s),
		ControlFont,
		$of("List.background"_s),
		WindowBackgroundColor,
		$of("List.foreground"_s),
		WindowTextColor,
		$of("List.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("List.selectionForeground"_s),
		SelectionTextColor,
		$of("List.lockToPositionOnScroll"_s),
		$of($Boolean::TRUE),
		$of("List.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl C"_s),
			$of("copy"_s),
			$of("ctrl V"_s),
			$of("paste"_s),
			$of("ctrl X"_s),
			$of("cut"_s),
			$of("COPY"_s),
			$of("copy"_s),
			$of("PASTE"_s),
			$of("paste"_s),
			$of("CUT"_s),
			$of("cut"_s),
			$of("control INSERT"_s),
			$of("copy"_s),
			$of("shift INSERT"_s),
			$of("paste"_s),
			$of("shift DELETE"_s),
			$of("cut"_s),
			$of("UP"_s),
			$of("selectPreviousRow"_s),
			$of("KP_UP"_s),
			$of("selectPreviousRow"_s),
			$of("shift UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("shift KP_UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl shift UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl shift KP_UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl UP"_s),
			$of("selectPreviousRowChangeLead"_s),
			$of("ctrl KP_UP"_s),
			$of("selectPreviousRowChangeLead"_s),
			$of("DOWN"_s),
			$of("selectNextRow"_s),
			$of("KP_DOWN"_s),
			$of("selectNextRow"_s),
			$of("shift DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("shift KP_DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl shift DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl shift KP_DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl DOWN"_s),
			$of("selectNextRowChangeLead"_s),
			$of("ctrl KP_DOWN"_s),
			$of("selectNextRowChangeLead"_s),
			$of("LEFT"_s),
			$of("selectPreviousColumn"_s),
			$of("KP_LEFT"_s),
			$of("selectPreviousColumn"_s),
			$of("shift LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("shift KP_LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift KP_LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl LEFT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("ctrl KP_LEFT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("RIGHT"_s),
			$of("selectNextColumn"_s),
			$of("KP_RIGHT"_s),
			$of("selectNextColumn"_s),
			$of("shift RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("shift KP_RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift KP_RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl RIGHT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("ctrl KP_RIGHT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("HOME"_s),
			$of("selectFirstRow"_s),
			$of("shift HOME"_s),
			$of("selectFirstRowExtendSelection"_s),
			$of("ctrl shift HOME"_s),
			$of("selectFirstRowExtendSelection"_s),
			$of("ctrl HOME"_s),
			$of("selectFirstRowChangeLead"_s),
			$of("END"_s),
			$of("selectLastRow"_s),
			$of("shift END"_s),
			$of("selectLastRowExtendSelection"_s),
			$of("ctrl shift END"_s),
			$of("selectLastRowExtendSelection"_s),
			$of("ctrl END"_s),
			$of("selectLastRowChangeLead"_s),
			$of("PAGE_UP"_s),
			$of("scrollUp"_s),
			$of("shift PAGE_UP"_s),
			$of("scrollUpExtendSelection"_s),
			$of("ctrl shift PAGE_UP"_s),
			$of("scrollUpExtendSelection"_s),
			$of("ctrl PAGE_UP"_s),
			$of("scrollUpChangeLead"_s),
			$of("PAGE_DOWN"_s),
			$of("scrollDown"_s),
			$of("shift PAGE_DOWN"_s),
			$of("scrollDownExtendSelection"_s),
			$of("ctrl shift PAGE_DOWN"_s),
			$of("scrollDownExtendSelection"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollDownChangeLead"_s),
			$of("ctrl A"_s),
			$of("selectAll"_s),
			$of("ctrl SLASH"_s),
			$of("selectAll"_s),
			$of("ctrl BACK_SLASH"_s),
			$of("clearSelection"_s),
			$of("SPACE"_s),
			$of("addToSelection"_s),
			$of("ctrl SPACE"_s),
			$of("toggleAndAnchor"_s),
			$of("shift SPACE"_s),
			$of("extendTo"_s),
			$of("ctrl shift SPACE"_s),
			$of("moveSelectionTo"_s)
		}))),
		$of("PopupMenu.font"_s),
		MenuFont,
		$of("PopupMenu.background"_s),
		MenuBackgroundColor,
		$of("PopupMenu.foreground"_s),
		MenuTextColor,
		$of("PopupMenu.popupSound"_s),
		$of("win.sound.menuPopup"_s),
		$of("PopupMenu.consumeEventOnClose"_s),
		$of($Boolean::FALSE),
		$of("Menu.font"_s),
		MenuFont,
		$of("Menu.foreground"_s),
		MenuTextColor,
		$of("Menu.background"_s),
		MenuBackgroundColor,
		$of("Menu.useMenuBarBackgroundForTopLevel"_s),
		$of($Boolean::TRUE),
		$of("Menu.selectionForeground"_s),
		SelectionTextColor,
		$of("Menu.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("Menu.acceleratorForeground"_s),
		MenuTextColor,
		$of("Menu.acceleratorSelectionForeground"_s),
		SelectionTextColor,
		$of("Menu.menuPopupOffsetX"_s),
		$($of($Integer::valueOf(0))),
		$of("Menu.menuPopupOffsetY"_s),
		$($of($Integer::valueOf(0))),
		$of("Menu.submenuPopupOffsetX"_s),
		$($of($Integer::valueOf(-4))),
		$of("Menu.submenuPopupOffsetY"_s),
		$($of($Integer::valueOf(-3))),
		$of("Menu.crossMenuMnemonic"_s),
		$of($Boolean::FALSE),
		$of("Menu.preserveTopLevelSelection"_s),
		$of($Boolean::TRUE),
		$of("MenuBar.font"_s),
		MenuFont,
		$of("MenuBar.background"_s),
		$of($$new($WindowsLookAndFeel$XPValue, MenuBarBackgroundColor, MenuBackgroundColor)),
		$of("MenuBar.foreground"_s),
		MenuTextColor,
		$of("MenuBar.shadow"_s),
		ControlShadowColor,
		$of("MenuBar.highlight"_s),
		ControlHighlightColor,
		$of("MenuBar.height"_s),
		menuBarHeight,
		$of("MenuBar.rolloverEnabled"_s),
		hotTrackingOn,
		$of("MenuBar.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("F10"_s),
			$of("takeFocus"_s)
		})),
		$of("MenuItem.font"_s),
		MenuFont,
		$of("MenuItem.acceleratorFont"_s),
		MenuFont,
		$of("MenuItem.foreground"_s),
		MenuTextColor,
		$of("MenuItem.background"_s),
		MenuBackgroundColor,
		$of("MenuItem.selectionForeground"_s),
		SelectionTextColor,
		$of("MenuItem.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("MenuItem.disabledForeground"_s),
		InactiveTextColor,
		$of("MenuItem.acceleratorForeground"_s),
		MenuTextColor,
		$of("MenuItem.acceleratorSelectionForeground"_s),
		SelectionTextColor,
		$of("MenuItem.acceleratorDelimiter"_s),
		menuItemAcceleratorDelimiter,
		$of("MenuItem.commandSound"_s),
		$of("win.sound.menuCommand"_s),
		$of("MenuItem.disabledAreNavigable"_s),
		$of($Boolean::TRUE),
		$of("RadioButton.font"_s),
		ControlFont,
		$of("RadioButton.interiorBackground"_s),
		WindowBackgroundColor,
		$of("RadioButton.background"_s),
		ControlBackgroundColor,
		$of("RadioButton.foreground"_s),
		WindowTextColor,
		$of("RadioButton.shadow"_s),
		ControlShadowColor,
		$of("RadioButton.darkShadow"_s),
		ControlDarkShadowColor,
		$of("RadioButton.light"_s),
		ControlLightColor,
		$of("RadioButton.highlight"_s),
		ControlHighlightColor,
		$of("RadioButton.focus"_s),
		buttonFocusColor,
		$of("RadioButton.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("RadioButton.totalInsets"_s),
		$of($$new($Insets, 4, 4, 4, 4)),
		$of("RadioButtonMenuItem.font"_s),
		MenuFont,
		$of("RadioButtonMenuItem.foreground"_s),
		MenuTextColor,
		$of("RadioButtonMenuItem.background"_s),
		MenuBackgroundColor,
		$of("RadioButtonMenuItem.selectionForeground"_s),
		SelectionTextColor,
		$of("RadioButtonMenuItem.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("RadioButtonMenuItem.disabledForeground"_s),
		InactiveTextColor,
		$of("RadioButtonMenuItem.acceleratorForeground"_s),
		MenuTextColor,
		$of("RadioButtonMenuItem.acceleratorSelectionForeground"_s),
		SelectionTextColor,
		$of("RadioButtonMenuItem.commandSound"_s),
		$of("win.sound.menuCommand"_s),
		$of("OptionPane.font"_s),
		MessageFont,
		$of("OptionPane.messageFont"_s),
		MessageFont,
		$of("OptionPane.buttonFont"_s),
		MessageFont,
		$of("OptionPane.background"_s),
		ControlBackgroundColor,
		$of("OptionPane.foreground"_s),
		WindowTextColor,
		$of("OptionPane.buttonMinimumWidth"_s),
		$of($$new($WindowsLookAndFeel$XPDLUValue, this, 50, 50, $SwingConstants::EAST)),
		$of("OptionPane.messageForeground"_s),
		ControlTextColor,
		$of("OptionPane.errorIcon"_s),
		$of($$new($WindowsLookAndFeel$LazyWindowsIcon, "optionPaneIcon Error"_s, "icons/Error.gif"_s)),
		$of("OptionPane.informationIcon"_s),
		$of($$new($WindowsLookAndFeel$LazyWindowsIcon, "optionPaneIcon Information"_s, "icons/Inform.gif"_s)),
		$of("OptionPane.questionIcon"_s),
		$of($$new($WindowsLookAndFeel$LazyWindowsIcon, "optionPaneIcon Question"_s, "icons/Question.gif"_s)),
		$of("OptionPane.warningIcon"_s),
		$of($$new($WindowsLookAndFeel$LazyWindowsIcon, "optionPaneIcon Warning"_s, "icons/Warn.gif"_s)),
		$of("OptionPane.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("close"_s)
		})),
		$of("OptionPane.errorSound"_s),
		$of("win.sound.hand"_s),
		$of("OptionPane.informationSound"_s),
		$of("win.sound.asterisk"_s),
		$of("OptionPane.questionSound"_s),
		$of("win.sound.question"_s),
		$of("OptionPane.warningSound"_s),
		$of("win.sound.exclamation"_s),
		$of("FormattedTextField.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl C"_s),
			$of($DefaultEditorKit::copyAction),
			$of("ctrl V"_s),
			$of($DefaultEditorKit::pasteAction),
			$of("ctrl X"_s),
			$of($DefaultEditorKit::cutAction),
			$of("COPY"_s),
			$of($DefaultEditorKit::copyAction),
			$of("PASTE"_s),
			$of($DefaultEditorKit::pasteAction),
			$of("CUT"_s),
			$of($DefaultEditorKit::cutAction),
			$of("control INSERT"_s),
			$of($DefaultEditorKit::copyAction),
			$of("shift INSERT"_s),
			$of($DefaultEditorKit::pasteAction),
			$of("shift DELETE"_s),
			$of($DefaultEditorKit::cutAction),
			$of("shift LEFT"_s),
			$of($DefaultEditorKit::selectionBackwardAction),
			$of("shift KP_LEFT"_s),
			$of($DefaultEditorKit::selectionBackwardAction),
			$of("shift RIGHT"_s),
			$of($DefaultEditorKit::selectionForwardAction),
			$of("shift KP_RIGHT"_s),
			$of($DefaultEditorKit::selectionForwardAction),
			$of("ctrl LEFT"_s),
			$of($DefaultEditorKit::previousWordAction),
			$of("ctrl KP_LEFT"_s),
			$of($DefaultEditorKit::previousWordAction),
			$of("ctrl RIGHT"_s),
			$of($DefaultEditorKit::nextWordAction),
			$of("ctrl KP_RIGHT"_s),
			$of($DefaultEditorKit::nextWordAction),
			$of("ctrl shift LEFT"_s),
			$of($DefaultEditorKit::selectionPreviousWordAction),
			$of("ctrl shift KP_LEFT"_s),
			$of($DefaultEditorKit::selectionPreviousWordAction),
			$of("ctrl shift RIGHT"_s),
			$of($DefaultEditorKit::selectionNextWordAction),
			$of("ctrl shift KP_RIGHT"_s),
			$of($DefaultEditorKit::selectionNextWordAction),
			$of("ctrl A"_s),
			$of($DefaultEditorKit::selectAllAction),
			$of("HOME"_s),
			$of($DefaultEditorKit::beginLineAction),
			$of("END"_s),
			$of($DefaultEditorKit::endLineAction),
			$of("shift HOME"_s),
			$of($DefaultEditorKit::selectionBeginLineAction),
			$of("shift END"_s),
			$of($DefaultEditorKit::selectionEndLineAction),
			$of("BACK_SPACE"_s),
			$of($DefaultEditorKit::deletePrevCharAction),
			$of("shift BACK_SPACE"_s),
			$of($DefaultEditorKit::deletePrevCharAction),
			$of("ctrl H"_s),
			$of($DefaultEditorKit::deletePrevCharAction),
			$of("DELETE"_s),
			$of($DefaultEditorKit::deleteNextCharAction),
			$of("ctrl DELETE"_s),
			$of($DefaultEditorKit::deleteNextWordAction),
			$of("ctrl BACK_SPACE"_s),
			$of($DefaultEditorKit::deletePrevWordAction),
			$of("RIGHT"_s),
			$of($DefaultEditorKit::forwardAction),
			$of("LEFT"_s),
			$of($DefaultEditorKit::backwardAction),
			$of("KP_RIGHT"_s),
			$of($DefaultEditorKit::forwardAction),
			$of("KP_LEFT"_s),
			$of($DefaultEditorKit::backwardAction),
			$of("ENTER"_s),
			$of($JTextField::notifyAction),
			$of("ctrl BACK_SLASH"_s),
			$of("unselect"_s),
			$of("control shift O"_s),
			$of("toggle-componentOrientation"_s),
			$of("ESCAPE"_s),
			$of("reset-field-edit"_s),
			$of("UP"_s),
			$of("increment"_s),
			$of("KP_UP"_s),
			$of("increment"_s),
			$of("DOWN"_s),
			$of("decrement"_s),
			$of("KP_DOWN"_s),
			$of("decrement"_s)
		}))),
		$of("FormattedTextField.inactiveBackground"_s),
		ReadOnlyTextBackground,
		$of("FormattedTextField.disabledBackground"_s),
		DisabledTextBackground,
		$of("FormattedTextField.background"_s),
		TextBackground,
		$of("FormattedTextField.foreground"_s),
		WindowTextColor,
		$of("Panel.font"_s),
		ControlFont,
		$of("Panel.background"_s),
		ControlBackgroundColor,
		$of("Panel.foreground"_s),
		WindowTextColor,
		$of("PasswordField.font"_s),
		ControlFont,
		$of("PasswordField.background"_s),
		TextBackground,
		$of("PasswordField.foreground"_s),
		WindowTextColor,
		$of("PasswordField.inactiveForeground"_s),
		InactiveTextColor,
		$of("PasswordField.inactiveBackground"_s),
		ReadOnlyTextBackground,
		$of("PasswordField.disabledBackground"_s),
		DisabledTextBackground,
		$of("PasswordField.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("PasswordField.selectionForeground"_s),
		SelectionTextColor,
		$of("PasswordField.caretForeground"_s),
		WindowTextColor,
		$of("PasswordField.echoChar"_s),
		$of($$new($WindowsLookAndFeel$XPValue, var$8, $($Character::valueOf(u'*')))),
		$of("ProgressBar.font"_s),
		ControlFont,
		$of("ProgressBar.foreground"_s),
		SelectionBackgroundColor,
		$of("ProgressBar.background"_s),
		ControlBackgroundColor,
		$of("ProgressBar.shadow"_s),
		ControlShadowColor,
		$of("ProgressBar.highlight"_s),
		ControlHighlightColor,
		$of("ProgressBar.selectionForeground"_s),
		ControlBackgroundColor,
		$of("ProgressBar.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("ProgressBar.cellLength"_s),
		$($of($Integer::valueOf(7))),
		$of("ProgressBar.cellSpacing"_s),
		$($of($Integer::valueOf(2))),
		$of("ProgressBar.indeterminateInsets"_s),
		$of($$new($Insets, 3, 3, 3, 3)),
		$of("RootPane.defaultButtonWindowKeyBindings"_s),
		$of($$new($ObjectArray, {
			$of("ENTER"_s),
			$of("press"_s),
			$of("released ENTER"_s),
			$of("release"_s),
			$of("ctrl ENTER"_s),
			$of("press"_s),
			$of("ctrl released ENTER"_s),
			$of("release"_s)
		})),
		$of("ScrollBar.background"_s),
		ScrollbarBackgroundColor,
		$of("ScrollBar.foreground"_s),
		ControlBackgroundColor,
		$of("ScrollBar.track"_s),
		$of(white),
		$of("ScrollBar.trackForeground"_s),
		ScrollbarBackgroundColor,
		$of("ScrollBar.trackHighlight"_s),
		$of(black),
		$of("ScrollBar.trackHighlightForeground"_s),
		$of(scrollBarTrackHighlight),
		$of("ScrollBar.thumb"_s),
		ControlBackgroundColor,
		$of("ScrollBar.thumbHighlight"_s),
		ControlHighlightColor,
		$of("ScrollBar.thumbDarkShadow"_s),
		ControlDarkShadowColor,
		$of("ScrollBar.thumbShadow"_s),
		ControlShadowColor,
		$of("ScrollBar.width"_s),
		scrollBarWidth,
		$of("ScrollBar.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_RIGHT"_s),
			$of("positiveUnitIncrement"_s),
			$of("DOWN"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_DOWN"_s),
			$of("positiveUnitIncrement"_s),
			$of("PAGE_DOWN"_s),
			$of("positiveBlockIncrement"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("positiveBlockIncrement"_s),
			$of("LEFT"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_LEFT"_s),
			$of("negativeUnitIncrement"_s),
			$of("UP"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_UP"_s),
			$of("negativeUnitIncrement"_s),
			$of("PAGE_UP"_s),
			$of("negativeBlockIncrement"_s),
			$of("ctrl PAGE_UP"_s),
			$of("negativeBlockIncrement"_s),
			$of("HOME"_s),
			$of("minScroll"_s),
			$of("END"_s),
			$of("maxScroll"_s)
		}))),
		$of("ScrollPane.font"_s),
		ControlFont,
		$of("ScrollPane.background"_s),
		ControlBackgroundColor,
		$of("ScrollPane.foreground"_s),
		ControlTextColor,
		$of("ScrollPane.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("unitScrollRight"_s),
			$of("KP_RIGHT"_s),
			$of("unitScrollRight"_s),
			$of("DOWN"_s),
			$of("unitScrollDown"_s),
			$of("KP_DOWN"_s),
			$of("unitScrollDown"_s),
			$of("LEFT"_s),
			$of("unitScrollLeft"_s),
			$of("KP_LEFT"_s),
			$of("unitScrollLeft"_s),
			$of("UP"_s),
			$of("unitScrollUp"_s),
			$of("KP_UP"_s),
			$of("unitScrollUp"_s),
			$of("PAGE_UP"_s),
			$of("scrollUp"_s),
			$of("PAGE_DOWN"_s),
			$of("scrollDown"_s),
			$of("ctrl PAGE_UP"_s),
			$of("scrollLeft"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollRight"_s),
			$of("ctrl HOME"_s),
			$of("scrollHome"_s),
			$of("ctrl END"_s),
			$of("scrollEnd"_s)
		}))),
		$of("Separator.background"_s),
		ControlHighlightColor,
		$of("Separator.foreground"_s),
		ControlShadowColor,
		$of("Slider.font"_s),
		ControlFont,
		$of("Slider.foreground"_s),
		ControlBackgroundColor,
		$of("Slider.background"_s),
		ControlBackgroundColor,
		$of("Slider.highlight"_s),
		ControlHighlightColor,
		$of("Slider.shadow"_s),
		ControlShadowColor,
		$of("Slider.focus"_s),
		ControlDarkShadowColor,
		$of("Slider.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_RIGHT"_s),
			$of("positiveUnitIncrement"_s),
			$of("DOWN"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_DOWN"_s),
			$of("negativeUnitIncrement"_s),
			$of("PAGE_DOWN"_s),
			$of("negativeBlockIncrement"_s),
			$of("LEFT"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_LEFT"_s),
			$of("negativeUnitIncrement"_s),
			$of("UP"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_UP"_s),
			$of("positiveUnitIncrement"_s),
			$of("PAGE_UP"_s),
			$of("positiveBlockIncrement"_s),
			$of("HOME"_s),
			$of("minScroll"_s),
			$of("END"_s),
			$of("maxScroll"_s)
		}))),
		$of("Spinner.font"_s),
		ControlFont,
		$of("Spinner.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("UP"_s),
			$of("increment"_s),
			$of("KP_UP"_s),
			$of("increment"_s),
			$of("DOWN"_s),
			$of("decrement"_s),
			$of("KP_DOWN"_s),
			$of("decrement"_s)
		}))),
		$of("SplitPane.background"_s),
		ControlBackgroundColor,
		$of("SplitPane.highlight"_s),
		ControlHighlightColor,
		$of("SplitPane.shadow"_s),
		ControlShadowColor,
		$of("SplitPane.darkShadow"_s),
		ControlDarkShadowColor,
		$of("SplitPane.dividerSize"_s),
		$($of($Integer::valueOf(5))),
		$of("SplitPane.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("UP"_s),
			$of("negativeIncrement"_s),
			$of("DOWN"_s),
			$of("positiveIncrement"_s),
			$of("LEFT"_s),
			$of("negativeIncrement"_s),
			$of("RIGHT"_s),
			$of("positiveIncrement"_s),
			$of("KP_UP"_s),
			$of("negativeIncrement"_s),
			$of("KP_DOWN"_s),
			$of("positiveIncrement"_s),
			$of("KP_LEFT"_s),
			$of("negativeIncrement"_s),
			$of("KP_RIGHT"_s),
			$of("positiveIncrement"_s),
			$of("HOME"_s),
			$of("selectMin"_s),
			$of("END"_s),
			$of("selectMax"_s),
			$of("F8"_s),
			$of("startResize"_s),
			$of("F6"_s),
			$of("toggleFocus"_s),
			$of("ctrl TAB"_s),
			$of("focusOutForward"_s),
			$of("ctrl shift TAB"_s),
			$of("focusOutBackward"_s)
		}))),
		$of("TabbedPane.tabsOverlapBorder"_s),
		$of($$new($WindowsLookAndFeel$XPValue, $Boolean::TRUE, $Boolean::FALSE)),
		$of("TabbedPane.tabInsets"_s),
		$of($$new($WindowsLookAndFeel$XPValue, var$9, $$new($InsetsUIResource, 0, 4, 1, 4))),
		$of("TabbedPane.tabAreaInsets"_s),
		$of($$new($WindowsLookAndFeel$XPValue, var$10, $$new($InsetsUIResource, 3, 2, 0, 2))),
		$of("TabbedPane.font"_s),
		ControlFont,
		$of("TabbedPane.background"_s),
		ControlBackgroundColor,
		$of("TabbedPane.foreground"_s),
		ControlTextColor,
		$of("TabbedPane.highlight"_s),
		ControlHighlightColor,
		$of("TabbedPane.light"_s),
		ControlLightColor,
		$of("TabbedPane.shadow"_s),
		ControlShadowColor,
		$of("TabbedPane.darkShadow"_s),
		ControlDarkShadowColor,
		$of("TabbedPane.focus"_s),
		ControlTextColor,
		$of("TabbedPane.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("navigateRight"_s),
			$of("KP_RIGHT"_s),
			$of("navigateRight"_s),
			$of("LEFT"_s),
			$of("navigateLeft"_s),
			$of("KP_LEFT"_s),
			$of("navigateLeft"_s),
			$of("UP"_s),
			$of("navigateUp"_s),
			$of("KP_UP"_s),
			$of("navigateUp"_s),
			$of("DOWN"_s),
			$of("navigateDown"_s),
			$of("KP_DOWN"_s),
			$of("navigateDown"_s),
			$of("ctrl DOWN"_s),
			$of("requestFocusForVisibleComponent"_s),
			$of("ctrl KP_DOWN"_s),
			$of("requestFocusForVisibleComponent"_s)
		}))),
		$of("TabbedPane.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl TAB"_s),
			$of("navigateNext"_s),
			$of("ctrl shift TAB"_s),
			$of("navigatePrevious"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("navigatePageDown"_s),
			$of("ctrl PAGE_UP"_s),
			$of("navigatePageUp"_s),
			$of("ctrl UP"_s),
			$of("requestFocus"_s),
			$of("ctrl KP_UP"_s),
			$of("requestFocus"_s)
		}))),
		$of("Table.font"_s),
		ControlFont,
		$of("Table.foreground"_s),
		ControlTextColor,
		$of("Table.background"_s),
		WindowBackgroundColor,
		$of("Table.highlight"_s),
		ControlHighlightColor,
		$of("Table.light"_s),
		ControlLightColor,
		$of("Table.shadow"_s),
		ControlShadowColor,
		$of("Table.darkShadow"_s),
		ControlDarkShadowColor,
		$of("Table.selectionForeground"_s),
		SelectionTextColor,
		$of("Table.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("Table.gridColor"_s),
		$of(gray),
		$of("Table.focusCellBackground"_s),
		WindowBackgroundColor,
		$of("Table.focusCellForeground"_s),
		ControlTextColor,
		$of("Table.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl C"_s),
			$of("copy"_s),
			$of("ctrl V"_s),
			$of("paste"_s),
			$of("ctrl X"_s),
			$of("cut"_s),
			$of("COPY"_s),
			$of("copy"_s),
			$of("PASTE"_s),
			$of("paste"_s),
			$of("CUT"_s),
			$of("cut"_s),
			$of("control INSERT"_s),
			$of("copy"_s),
			$of("shift INSERT"_s),
			$of("paste"_s),
			$of("shift DELETE"_s),
			$of("cut"_s),
			$of("RIGHT"_s),
			$of("selectNextColumn"_s),
			$of("KP_RIGHT"_s),
			$of("selectNextColumn"_s),
			$of("shift RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("shift KP_RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift KP_RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl RIGHT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("ctrl KP_RIGHT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("LEFT"_s),
			$of("selectPreviousColumn"_s),
			$of("KP_LEFT"_s),
			$of("selectPreviousColumn"_s),
			$of("shift LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("shift KP_LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift KP_LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl LEFT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("ctrl KP_LEFT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("DOWN"_s),
			$of("selectNextRow"_s),
			$of("KP_DOWN"_s),
			$of("selectNextRow"_s),
			$of("shift DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("shift KP_DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl shift DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl shift KP_DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl DOWN"_s),
			$of("selectNextRowChangeLead"_s),
			$of("ctrl KP_DOWN"_s),
			$of("selectNextRowChangeLead"_s),
			$of("UP"_s),
			$of("selectPreviousRow"_s),
			$of("KP_UP"_s),
			$of("selectPreviousRow"_s),
			$of("shift UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("shift KP_UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl shift UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl shift KP_UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl UP"_s),
			$of("selectPreviousRowChangeLead"_s),
			$of("ctrl KP_UP"_s),
			$of("selectPreviousRowChangeLead"_s),
			$of("HOME"_s),
			$of("selectFirstColumn"_s),
			$of("shift HOME"_s),
			$of("selectFirstColumnExtendSelection"_s),
			$of("ctrl shift HOME"_s),
			$of("selectFirstRowExtendSelection"_s),
			$of("ctrl HOME"_s),
			$of("selectFirstRow"_s),
			$of("END"_s),
			$of("selectLastColumn"_s),
			$of("shift END"_s),
			$of("selectLastColumnExtendSelection"_s),
			$of("ctrl shift END"_s),
			$of("selectLastRowExtendSelection"_s),
			$of("ctrl END"_s),
			$of("selectLastRow"_s),
			$of("PAGE_UP"_s),
			$of("scrollUpChangeSelection"_s),
			$of("shift PAGE_UP"_s),
			$of("scrollUpExtendSelection"_s),
			$of("ctrl shift PAGE_UP"_s),
			$of("scrollLeftExtendSelection"_s),
			$of("ctrl PAGE_UP"_s),
			$of("scrollLeftChangeSelection"_s),
			$of("PAGE_DOWN"_s),
			$of("scrollDownChangeSelection"_s),
			$of("shift PAGE_DOWN"_s),
			$of("scrollDownExtendSelection"_s),
			$of("ctrl shift PAGE_DOWN"_s),
			$of("scrollRightExtendSelection"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollRightChangeSelection"_s),
			$of("TAB"_s),
			$of("selectNextColumnCell"_s),
			$of("shift TAB"_s),
			$of("selectPreviousColumnCell"_s),
			$of("ENTER"_s),
			$of("selectNextRowCell"_s),
			$of("shift ENTER"_s),
			$of("selectPreviousRowCell"_s),
			$of("ctrl A"_s),
			$of("selectAll"_s),
			$of("ctrl SLASH"_s),
			$of("selectAll"_s),
			$of("ctrl BACK_SLASH"_s),
			$of("clearSelection"_s),
			$of("ESCAPE"_s),
			$of("cancel"_s),
			$of("F2"_s),
			$of("startEditing"_s),
			$of("SPACE"_s),
			$of("addToSelection"_s),
			$of("ctrl SPACE"_s),
			$of("toggleAndAnchor"_s),
			$of("shift SPACE"_s),
			$of("extendTo"_s),
			$of("ctrl shift SPACE"_s),
			$of("moveSelectionTo"_s),
			$of("F8"_s),
			$of("focusHeader"_s)
		}))),
		$of("Table.sortIconHighlight"_s),
		ControlShadowColor,
		$of("Table.sortIconLight"_s),
		$of(white),
		$of("TableHeader.font"_s),
		ControlFont,
		$of("TableHeader.foreground"_s),
		ControlTextColor,
		$of("TableHeader.background"_s),
		ControlBackgroundColor,
		$of("TableHeader.focusCellBackground"_s),
		$of($$new($WindowsLookAndFeel$XPValue, $WindowsLookAndFeel$XPValue::NULL_VALUE, WindowBackgroundColor)),
		$of("TextArea.font"_s),
		FixedControlFont,
		$of("TextArea.background"_s),
		WindowBackgroundColor,
		$of("TextArea.foreground"_s),
		WindowTextColor,
		$of("TextArea.inactiveForeground"_s),
		InactiveTextColor,
		$of("TextArea.inactiveBackground"_s),
		WindowBackgroundColor,
		$of("TextArea.disabledBackground"_s),
		DisabledTextBackground,
		$of("TextArea.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("TextArea.selectionForeground"_s),
		SelectionTextColor,
		$of("TextArea.caretForeground"_s),
		WindowTextColor,
		$of("TextField.font"_s),
		ControlFont,
		$of("TextField.background"_s),
		TextBackground,
		$of("TextField.foreground"_s),
		WindowTextColor,
		$of("TextField.shadow"_s),
		ControlShadowColor,
		$of("TextField.darkShadow"_s),
		ControlDarkShadowColor,
		$of("TextField.light"_s),
		ControlLightColor,
		$of("TextField.highlight"_s),
		ControlHighlightColor,
		$of("TextField.inactiveForeground"_s),
		InactiveTextColor,
		$of("TextField.inactiveBackground"_s),
		ReadOnlyTextBackground,
		$of("TextField.disabledBackground"_s),
		DisabledTextBackground,
		$of("TextField.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("TextField.selectionForeground"_s),
		SelectionTextColor,
		$of("TextField.caretForeground"_s),
		WindowTextColor,
		$of("TextPane.font"_s),
		ControlFont,
		$of("TextPane.background"_s),
		WindowBackgroundColor,
		$of("TextPane.foreground"_s),
		WindowTextColor,
		$of("TextPane.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("TextPane.selectionForeground"_s),
		SelectionTextColor,
		$of("TextPane.inactiveBackground"_s),
		WindowBackgroundColor,
		$of("TextPane.disabledBackground"_s),
		DisabledTextBackground,
		$of("TextPane.caretForeground"_s),
		WindowTextColor,
		$of("TitledBorder.font"_s),
		ControlFont,
		$of("TitledBorder.titleColor"_s),
		$of($$new($WindowsLookAndFeel$XPColorValue, $TMSchema$Part::BP_GROUPBOX, nullptr, $TMSchema$Prop::TEXTCOLOR, WindowTextColor)),
		$of("ToggleButton.font"_s),
		ControlFont,
		$of("ToggleButton.background"_s),
		ControlBackgroundColor,
		$of("ToggleButton.foreground"_s),
		ControlTextColor,
		$of("ToggleButton.shadow"_s),
		ControlShadowColor,
		$of("ToggleButton.darkShadow"_s),
		ControlDarkShadowColor,
		$of("ToggleButton.light"_s),
		ControlLightColor,
		$of("ToggleButton.highlight"_s),
		ControlHighlightColor,
		$of("ToggleButton.focus"_s),
		ControlTextColor,
		$of("ToggleButton.textShiftOffset"_s),
		$($of($Integer::valueOf(1))),
		$of("ToggleButton.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("ToolBar.font"_s),
		MenuFont,
		$of("ToolBar.background"_s),
		ControlBackgroundColor,
		$of("ToolBar.foreground"_s),
		ControlTextColor,
		$of("ToolBar.shadow"_s),
		ControlShadowColor,
		$of("ToolBar.darkShadow"_s),
		ControlDarkShadowColor,
		$of("ToolBar.light"_s),
		ControlLightColor,
		$of("ToolBar.highlight"_s),
		ControlHighlightColor,
		$of("ToolBar.dockingBackground"_s),
		ControlBackgroundColor,
		$of("ToolBar.dockingForeground"_s),
		$of(red),
		$of("ToolBar.floatingBackground"_s),
		ControlBackgroundColor,
		$of("ToolBar.floatingForeground"_s),
		$of(darkGray),
		$of("ToolBar.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("UP"_s),
			$of("navigateUp"_s),
			$of("KP_UP"_s),
			$of("navigateUp"_s),
			$of("DOWN"_s),
			$of("navigateDown"_s),
			$of("KP_DOWN"_s),
			$of("navigateDown"_s),
			$of("LEFT"_s),
			$of("navigateLeft"_s),
			$of("KP_LEFT"_s),
			$of("navigateLeft"_s),
			$of("RIGHT"_s),
			$of("navigateRight"_s),
			$of("KP_RIGHT"_s),
			$of("navigateRight"_s)
		}))),
		$of("ToolBar.separatorSize"_s),
		($Object*)nullptr,
		$of("ToolTip.font"_s),
		ToolTipFont,
		$of("ToolTip.background"_s),
		$of($$new($WindowsDesktopProperty, "win.tooltip.backgroundColor"_s, $($nc(table)->get("info"_s)))),
		$of("ToolTip.foreground"_s),
		$of($$new($WindowsDesktopProperty, "win.tooltip.textColor"_s, $($nc(table)->get("infoText"_s)))),
		$of("ToolTipManager.enableToolTipMode"_s),
		$of("activeApplication"_s),
		$of("Tree.selectionBorderColor"_s),
		$of(black),
		$of("Tree.drawDashedFocusIndicator"_s),
		$of($Boolean::TRUE),
		$of("Tree.lineTypeDashed"_s),
		$of($Boolean::TRUE),
		$of("Tree.font"_s),
		ControlFont,
		$of("Tree.background"_s),
		WindowBackgroundColor,
		$of("Tree.foreground"_s),
		WindowTextColor,
		$of("Tree.hash"_s),
		$of(gray),
		$of("Tree.leftChildIndent"_s),
		$($of($Integer::valueOf(8))),
		$of("Tree.rightChildIndent"_s),
		$($of($Integer::valueOf(11))),
		$of("Tree.textForeground"_s),
		WindowTextColor,
		$of("Tree.textBackground"_s),
		WindowBackgroundColor,
		$of("Tree.selectionForeground"_s),
		SelectionTextColor,
		$of("Tree.selectionBackground"_s),
		SelectionBackgroundColor,
		$of("Tree.expandedIcon"_s),
		treeExpandedIcon,
		$of("Tree.collapsedIcon"_s),
		treeCollapsedIcon,
		$of("Tree.openIcon"_s),
		$of($$new($WindowsLookAndFeel$ActiveWindowsIcon, this, "win.icon.shellIconBPP"_s, "shell32Icon 5"_s, "icons/TreeOpen.gif"_s)),
		$of("Tree.closedIcon"_s),
		$of($$new($WindowsLookAndFeel$ActiveWindowsIcon, this, "win.icon.shellIconBPP"_s, "shell32Icon 4"_s, "icons/TreeClosed.gif"_s)),
		$of("Tree.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ADD"_s),
			$of("expand"_s),
			$of("SUBTRACT"_s),
			$of("collapse"_s),
			$of("ctrl C"_s),
			$of("copy"_s),
			$of("ctrl V"_s),
			$of("paste"_s),
			$of("ctrl X"_s),
			$of("cut"_s),
			$of("COPY"_s),
			$of("copy"_s),
			$of("PASTE"_s),
			$of("paste"_s),
			$of("CUT"_s),
			$of("cut"_s),
			$of("control INSERT"_s),
			$of("copy"_s),
			$of("shift INSERT"_s),
			$of("paste"_s),
			$of("shift DELETE"_s),
			$of("cut"_s),
			$of("UP"_s),
			$of("selectPrevious"_s),
			$of("KP_UP"_s),
			$of("selectPrevious"_s),
			$of("shift UP"_s),
			$of("selectPreviousExtendSelection"_s),
			$of("shift KP_UP"_s),
			$of("selectPreviousExtendSelection"_s),
			$of("ctrl shift UP"_s),
			$of("selectPreviousExtendSelection"_s),
			$of("ctrl shift KP_UP"_s),
			$of("selectPreviousExtendSelection"_s),
			$of("ctrl UP"_s),
			$of("selectPreviousChangeLead"_s),
			$of("ctrl KP_UP"_s),
			$of("selectPreviousChangeLead"_s),
			$of("DOWN"_s),
			$of("selectNext"_s),
			$of("KP_DOWN"_s),
			$of("selectNext"_s),
			$of("shift DOWN"_s),
			$of("selectNextExtendSelection"_s),
			$of("shift KP_DOWN"_s),
			$of("selectNextExtendSelection"_s),
			$of("ctrl shift DOWN"_s),
			$of("selectNextExtendSelection"_s),
			$of("ctrl shift KP_DOWN"_s),
			$of("selectNextExtendSelection"_s),
			$of("ctrl DOWN"_s),
			$of("selectNextChangeLead"_s),
			$of("ctrl KP_DOWN"_s),
			$of("selectNextChangeLead"_s),
			$of("RIGHT"_s),
			$of("selectChild"_s),
			$of("KP_RIGHT"_s),
			$of("selectChild"_s),
			$of("LEFT"_s),
			$of("selectParent"_s),
			$of("KP_LEFT"_s),
			$of("selectParent"_s),
			$of("PAGE_UP"_s),
			$of("scrollUpChangeSelection"_s),
			$of("shift PAGE_UP"_s),
			$of("scrollUpExtendSelection"_s),
			$of("ctrl shift PAGE_UP"_s),
			$of("scrollUpExtendSelection"_s),
			$of("ctrl PAGE_UP"_s),
			$of("scrollUpChangeLead"_s),
			$of("PAGE_DOWN"_s),
			$of("scrollDownChangeSelection"_s),
			$of("shift PAGE_DOWN"_s),
			$of("scrollDownExtendSelection"_s),
			$of("ctrl shift PAGE_DOWN"_s),
			$of("scrollDownExtendSelection"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollDownChangeLead"_s),
			$of("HOME"_s),
			$of("selectFirst"_s),
			$of("shift HOME"_s),
			$of("selectFirstExtendSelection"_s),
			$of("ctrl shift HOME"_s),
			$of("selectFirstExtendSelection"_s),
			$of("ctrl HOME"_s),
			$of("selectFirstChangeLead"_s),
			$of("END"_s),
			$of("selectLast"_s),
			$of("shift END"_s),
			$of("selectLastExtendSelection"_s),
			$of("ctrl shift END"_s),
			$of("selectLastExtendSelection"_s),
			$of("ctrl END"_s),
			$of("selectLastChangeLead"_s),
			$of("F2"_s),
			$of("startEditing"_s),
			$of("ctrl A"_s),
			$of("selectAll"_s),
			$of("ctrl SLASH"_s),
			$of("selectAll"_s),
			$of("ctrl BACK_SLASH"_s),
			$of("clearSelection"_s),
			$of("ctrl LEFT"_s),
			$of("scrollLeft"_s),
			$of("ctrl KP_LEFT"_s),
			$of("scrollLeft"_s),
			$of("ctrl RIGHT"_s),
			$of("scrollRight"_s),
			$of("ctrl KP_RIGHT"_s),
			$of("scrollRight"_s),
			$of("SPACE"_s),
			$of("addToSelection"_s),
			$of("ctrl SPACE"_s),
			$of("toggleAndAnchor"_s),
			$of("shift SPACE"_s),
			$of("extendTo"_s),
			$of("ctrl shift SPACE"_s),
			$of("moveSelectionTo"_s)
		}))),
		$of("Tree.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("cancel"_s)
		}))),
		$of("Viewport.font"_s),
		ControlFont,
		$of("Viewport.background"_s),
		ControlBackgroundColor,
		$of("Viewport.foreground"_s),
		WindowTextColor
	}));
	$nc(table)->putDefaults(defaults);
	table->putDefaults($(getLazyValueDefaults()));
	initVistaComponentDefaults(table);
}

bool WindowsLookAndFeel::isOnVista() {
	$init(WindowsLookAndFeel);
	$init($OSInfo$OSType);
	bool var$0 = $OSInfo::getOSType() == $OSInfo$OSType::WINDOWS;
	return var$0 && $nc($($OSInfo::getWindowsVersion()))->compareTo($OSInfo::WINDOWS_VISTA) >= 0;
}

bool WindowsLookAndFeel::isOnWindows7() {
	$init(WindowsLookAndFeel);
	$init($OSInfo$OSType);
	bool var$0 = $OSInfo::getOSType() == $OSInfo$OSType::WINDOWS;
	return var$0 && $nc($($OSInfo::getWindowsVersion()))->compareTo($OSInfo::WINDOWS_7) >= 0;
}

void WindowsLookAndFeel::initVistaComponentDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	if (!isOnVista()) {
		return;
	}
	$var($StringArray, menuClasses, $new($StringArray, {
		"MenuItem"_s,
		"Menu"_s,
		"CheckBoxMenuItem"_s,
		"RadioButtonMenuItem"_s
	}));
	$var($ObjectArray, menuDefaults, $new($ObjectArray, menuClasses->length * 2));
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < menuClasses->length; ++i) {
			$var($String, key, $str({menuClasses->get(i), ".opaque"_s}));
			$var($Object, oldValue, $nc(table)->get(key));
			menuDefaults->set(j++, key);
			$init($Boolean);
			menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, $Boolean::FALSE, oldValue));
		}
	}
	$nc(table)->putDefaults(menuDefaults);
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < menuClasses->length; ++i) {
			$var($String, key, $str({menuClasses->get(i), ".acceleratorSelectionForeground"_s}));
			$var($Object, oldValue, table->get(key));
			menuDefaults->set(j++, key);
			menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, $(table->getColor($$str({menuClasses->get(i), ".acceleratorForeground"_s}))), oldValue));
		}
	}
	table->putDefaults(menuDefaults);
	$var($WindowsIconFactory$VistaMenuItemCheckIconFactory, menuItemCheckIconFactory, $WindowsIconFactory::getMenuItemCheckIconFactory());
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < menuClasses->length; ++i) {
			$var($String, key, $str({menuClasses->get(i), ".checkIconFactory"_s}));
			$var($Object, oldValue, table->get(key));
			menuDefaults->set(j++, key);
			menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, menuItemCheckIconFactory, oldValue));
		}
	}
	table->putDefaults(menuDefaults);
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < menuClasses->length; ++i) {
			$var($String, key, $str({menuClasses->get(i), ".checkIcon"_s}));
			$var($Object, oldValue, table->get(key));
			menuDefaults->set(j++, key);
			menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, $($nc(menuItemCheckIconFactory)->getIcon(menuClasses->get(i))), oldValue));
		}
	}
	table->putDefaults(menuDefaults);
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < menuClasses->length; ++i) {
			$var($String, key, $str({menuClasses->get(i), ".evenHeight"_s}));
			$var($Object, oldValue, table->get(key));
			menuDefaults->set(j++, key);
			$init($Boolean);
			menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, $Boolean::TRUE, oldValue));
		}
	}
	table->putDefaults(menuDefaults);
	if (!isOnWindows7()) {
		$var($InsetsUIResource, insets, $new($InsetsUIResource, 0, 0, 0, 0));
		{
			int32_t i = 0;
			int32_t j = 0;
			for (; i < menuClasses->length; ++i) {
				$var($String, key, $str({menuClasses->get(i), ".margin"_s}));
				$var($Object, oldValue, table->get(key));
				menuDefaults->set(j++, key);
				menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, insets, oldValue));
			}
		}
		table->putDefaults(menuDefaults);
		$var($Integer, checkIconOffsetInteger, $Integer::valueOf(0));
		{
			int32_t i = 0;
			int32_t j = 0;
			for (; i < menuClasses->length; ++i) {
				$var($String, key, $str({menuClasses->get(i), ".checkIconOffset"_s}));
				$var($Object, oldValue, table->get(key));
				menuDefaults->set(j++, key);
				menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, checkIconOffsetInteger, oldValue));
			}
		}
		table->putDefaults(menuDefaults);
	}
	int32_t var$1 = $WindowsPopupMenuUI::getSpanBeforeGutter();
	int32_t var$0 = var$1 + $WindowsPopupMenuUI::getGutterWidth();
	$var($Integer, afterCheckIconGap, $Integer::valueOf(var$0 + $WindowsPopupMenuUI::getSpanAfterGutter()));
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < menuClasses->length; ++i) {
			$var($String, key, $str({menuClasses->get(i), ".afterCheckIconGap"_s}));
			$var($Object, oldValue, table->get(key));
			menuDefaults->set(j++, key);
			menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, afterCheckIconGap, oldValue));
		}
	}
	table->putDefaults(menuDefaults);
	$var($Object, minimumTextOffset, $new($WindowsLookAndFeel$1, this));
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < menuClasses->length; ++i) {
			$var($String, key, $str({menuClasses->get(i), ".minimumTextOffset"_s}));
			$var($Object, oldValue, table->get(key));
			menuDefaults->set(j++, key);
			menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, minimumTextOffset, oldValue));
		}
	}
	table->putDefaults(menuDefaults);
	$var($String, POPUP_MENU_BORDER, "PopupMenu.border"_s);
	$init($TMSchema$Part);
	$var($TMSchema$Part, var$2, $TMSchema$Part::MENU);
	$var($Object, var$3, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6)));
	$var($Object, popupMenuBorder, $new($WindowsLookAndFeel$XPBorderValue, var$2, var$3, $($BorderFactory::createEmptyBorder(2, 2, 2, 2))));
	table->put(POPUP_MENU_BORDER, popupMenuBorder);
	$init($TMSchema$State);
	$var($Object, var$4, $of($new($WindowsLookAndFeel$SkinIcon, $TMSchema$Part::HP_HEADERSORTARROW, $TMSchema$State::SORTEDDOWN)));
	table->put("Table.ascendingSortIcon"_s, $$new($WindowsLookAndFeel$XPValue, var$4, static_cast<$UIDefaults$LazyValue*>($$new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7))));
	$var($Object, var$5, $of($new($WindowsLookAndFeel$SkinIcon, $TMSchema$Part::HP_HEADERSORTARROW, $TMSchema$State::SORTEDUP)));
	table->put("Table.descendingSortIcon"_s, $$new($WindowsLookAndFeel$XPValue, var$5, static_cast<$UIDefaults$LazyValue*>($$new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8))));
}

$Object* WindowsLookAndFeel::getDesktopFontValue($String* fontName, Object$* backup) {
	if (this->useSystemFontSettings) {
		return $of($new($WindowsLookAndFeel$WindowsFontProperty, fontName, backup));
	}
	return $of(nullptr);
}

$ObjectArray* WindowsLookAndFeel::getLazyValueDefaults() {
	$useLocalCurrentObjectStackCache();
	$init($TMSchema$Part);
	$var($Object, buttonBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::BP_PUSHBUTTON, static_cast<$UIDefaults$LazyValue*>($$new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9))));
	$var($Object, textFieldBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::EP_EDIT, static_cast<$UIDefaults$LazyValue*>($$new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10))));
	$var($Object, var$0, $of($new($InsetsUIResource, 2, 2, 2, 2)));
	$var($Object, textFieldMargin, $new($WindowsLookAndFeel$XPValue, var$0, $$new($InsetsUIResource, 1, 1, 1, 1)));
	$var($Object, spinnerBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::EP_EDIT, textFieldBorder, $$new($EmptyBorder, 2, 2, 2, 2)));
	$var($Object, spinnerArrowInsets, $new($WindowsLookAndFeel$XPValue, $$new($InsetsUIResource, 1, 1, 1, 1), nullptr));
	$var($Object, comboBoxBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::CP_COMBOBOX, textFieldBorder));
	$var($UIDefaults$LazyValue, focusCellHighlightBorder, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11)));
	$var($UIDefaults$LazyValue, etchedBorder, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12)));
	$var($UIDefaults$LazyValue, internalFrameBorder, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13)));
	$var($UIDefaults$LazyValue, loweredBevelBorder, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4)));
	$var($UIDefaults$LazyValue, marginBorder, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14)));
	$var($UIDefaults$LazyValue, menuBarBorder, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15)));
	$var($Object, popupMenuBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::MENU, static_cast<$UIDefaults$LazyValue*>($$new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6))));
	$var($UIDefaults$LazyValue, progressBarBorder, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16)));
	$var($UIDefaults$LazyValue, radioButtonBorder, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17)));
	$var($Object, scrollPaneBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::LBP_LISTBOX, textFieldBorder));
	$var($Object, tableScrollPaneBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::LBP_LISTBOX, loweredBevelBorder));
	$var($UIDefaults$LazyValue, tableHeaderBorder, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18)));
	$var($UIDefaults$LazyValue, toolBarBorder, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19)));
	$var($UIDefaults$LazyValue, toolTipBorder, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20)));
	$var($UIDefaults$LazyValue, checkBoxIcon, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21)));
	$var($UIDefaults$LazyValue, radioButtonIcon, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22)));
	$var($UIDefaults$LazyValue, radioButtonMenuItemIcon, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23)));
	$var($UIDefaults$LazyValue, menuItemCheckIcon, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24)));
	$var($UIDefaults$LazyValue, menuItemArrowIcon, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25)));
	$var($UIDefaults$LazyValue, menuArrowIcon, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26)));
	$var($Color, highlight, $cast($Color, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("win.3d.highlightColor"_s)));
	$var($Color, shadow, $cast($Color, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("win.3d.shadowColor"_s)));
	$init($Boolean);
	$var($Object, var$1, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27)));
	$var($Object, var$2, static_cast<$UIDefaults$LazyValue*>($new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28)));
	$var($ObjectArray, lazyDefaults, $new($ObjectArray, {
		$of("Button.border"_s),
		buttonBorder,
		$of("CheckBox.border"_s),
		$of(radioButtonBorder),
		$of("ComboBox.border"_s),
		comboBoxBorder,
		$of("DesktopIcon.border"_s),
		$of(internalFrameBorder),
		$of("FormattedTextField.border"_s),
		textFieldBorder,
		$of("FormattedTextField.margin"_s),
		textFieldMargin,
		$of("InternalFrame.border"_s),
		$of(internalFrameBorder),
		$of("List.focusCellHighlightBorder"_s),
		$of(focusCellHighlightBorder),
		$of("Table.focusCellHighlightBorder"_s),
		$of(focusCellHighlightBorder),
		$of("Menu.border"_s),
		$of(marginBorder),
		$of("MenuBar.border"_s),
		$of(menuBarBorder),
		$of("MenuItem.border"_s),
		$of(marginBorder),
		$of("PasswordField.border"_s),
		textFieldBorder,
		$of("PasswordField.margin"_s),
		textFieldMargin,
		$of("PopupMenu.border"_s),
		popupMenuBorder,
		$of("ProgressBar.border"_s),
		$of(progressBarBorder),
		$of("RadioButton.border"_s),
		$of(radioButtonBorder),
		$of("ScrollPane.border"_s),
		scrollPaneBorder,
		$of("Spinner.border"_s),
		spinnerBorder,
		$of("Spinner.arrowButtonInsets"_s),
		spinnerArrowInsets,
		$of("Spinner.arrowButtonSize"_s),
		$of($$new($Dimension, 17, 9)),
		$of("Table.scrollPaneBorder"_s),
		tableScrollPaneBorder,
		$of("TableHeader.cellBorder"_s),
		$of(tableHeaderBorder),
		$of("TextArea.margin"_s),
		textFieldMargin,
		$of("TextField.border"_s),
		textFieldBorder,
		$of("TextField.margin"_s),
		textFieldMargin,
		$of("TitledBorder.border"_s),
		$of($$new($WindowsLookAndFeel$2, this, highlight, shadow)),
		$of("ToggleButton.border"_s),
		$of(radioButtonBorder),
		$of("ToolBar.border"_s),
		$of(toolBarBorder),
		$of("ToolTip.border"_s),
		$of(toolTipBorder),
		$of("CheckBox.icon"_s),
		$of(checkBoxIcon),
		$of("Menu.arrowIcon"_s),
		$of(menuArrowIcon),
		$of("MenuItem.checkIcon"_s),
		$of(menuItemCheckIcon),
		$of("MenuItem.arrowIcon"_s),
		$of(menuItemArrowIcon),
		$of("RadioButton.icon"_s),
		$of(radioButtonIcon),
		$of("RadioButtonMenuItem.checkIcon"_s),
		$of(radioButtonMenuItemIcon),
		$of("InternalFrame.layoutTitlePaneAtOrigin"_s),
		$of($$new($WindowsLookAndFeel$XPValue, $Boolean::TRUE, $Boolean::FALSE)),
		$of("Table.ascendingSortIcon"_s),
		$of($$new($WindowsLookAndFeel$XPValue, var$1, static_cast<$UIDefaults$LazyValue*>($$new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7)))),
		$of("Table.descendingSortIcon"_s),
		$of($$new($WindowsLookAndFeel$XPValue, var$2, static_cast<$UIDefaults$LazyValue*>($$new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8))))
	}));
	return lazyDefaults;
}

void WindowsLookAndFeel::uninitialize() {
	$useLocalCurrentObjectStackCache();
	$BasicLookAndFeel::uninitialize();
	$init($WindowsPopupMenuUI);
	if ($WindowsPopupMenuUI::mnemonicListener != nullptr) {
		$nc($($MenuSelectionManager::defaultManager()))->removeChangeListener($WindowsPopupMenuUI::mnemonicListener);
	}
	$init($WindowsRootPaneUI);
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->removeKeyEventPostProcessor($WindowsRootPaneUI::altProcessor);
	$WindowsDesktopProperty::flushUnreferencedProperties();
}

void WindowsLookAndFeel::setMnemonicHidden(bool hide) {
	$init(WindowsLookAndFeel);
	if ($UIManager::getBoolean("Button.showMnemonics"_s) == true) {
		WindowsLookAndFeel::isMnemonicHidden$ = false;
	} else {
		WindowsLookAndFeel::isMnemonicHidden$ = hide;
	}
}

bool WindowsLookAndFeel::isMnemonicHidden() {
	$init(WindowsLookAndFeel);
	if ($UIManager::getBoolean("Button.showMnemonics"_s) == true) {
		WindowsLookAndFeel::isMnemonicHidden$ = false;
	}
	return WindowsLookAndFeel::isMnemonicHidden$;
}

bool WindowsLookAndFeel::isClassicWindows() {
	$init(WindowsLookAndFeel);
	return WindowsLookAndFeel::isClassicWindows$;
}

void WindowsLookAndFeel::provideErrorFeedback($Component* component) {
	$BasicLookAndFeel::provideErrorFeedback(component);
}

$LayoutStyle* WindowsLookAndFeel::getLayoutStyle() {
	$var($LayoutStyle, style, this->style);
	if (style == nullptr) {
		$assign(style, $new($WindowsLookAndFeel$WindowsLayoutStyle, this));
		$set(this, style, style);
	}
	return style;
}

$Action* WindowsLookAndFeel::createAudioAction(Object$* key) {
	$useLocalCurrentObjectStackCache();
	if (key != nullptr) {
		$var($String, audioKey, $cast($String, key));
		$var($String, audioValue, $cast($String, $UIManager::get(key)));
		return $new($WindowsLookAndFeel$AudioAction, audioKey, audioValue);
	} else {
		return nullptr;
	}
}

void WindowsLookAndFeel::repaintRootPane($Component* c$renamed) {
	$init(WindowsLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$var($Component, c, c$renamed);
	$var($JRootPane, root, nullptr);
	for (; c != nullptr; $assign(c, $nc(c)->getParent())) {
		if ($instanceOf($JRootPane, c)) {
			$assign(root, $cast($JRootPane, c));
		}
	}
	if (root != nullptr) {
		root->repaint();
	} else {
		c->repaint();
	}
}

int32_t WindowsLookAndFeel::dluToPixels(int32_t dlu, int32_t direction) {
	if (this->baseUnitX == 0) {
		calculateBaseUnits();
	}
	if (direction == $SwingConstants::EAST || direction == $SwingConstants::WEST) {
		return dlu * this->baseUnitX / 4;
	}
	if (!WindowsLookAndFeel::$assertionsDisabled && !(direction == $SwingConstants::NORTH || direction == $SwingConstants::SOUTH)) {
		$throwNew($AssertionError);
	}
	return dlu * this->baseUnitY / 8;
}

void WindowsLookAndFeel::calculateBaseUnits() {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, metrics, $nc($($Toolkit::getDefaultToolkit()))->getFontMetrics($($UIManager::getFont("Button.font"_s))));
	this->baseUnitX = $nc(metrics)->stringWidth("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"_s);
	this->baseUnitX = (this->baseUnitX / 26 + 1) / 2;
	int32_t var$0 = metrics->getAscent();
	this->baseUnitY = var$0 + metrics->getDescent() - 1;
}

$Icon* WindowsLookAndFeel::getDisabledIcon($JComponent* component, $Icon* icon) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	bool var$1 = icon != nullptr && component != nullptr && $nc($Boolean::TRUE)->equals($(component->getClientProperty(WindowsLookAndFeel::HI_RES_DISABLED_ICON_CLIENT_KEY)));
	bool var$0 = var$1 && icon->getIconWidth() > 0;
	if (var$0 && icon->getIconHeight() > 0) {
		int32_t var$2 = icon->getIconWidth();
		$var($BufferedImage, img, $new($BufferedImage, var$2, icon->getIconWidth(), $BufferedImage::TYPE_INT_ARGB));
		icon->paintIcon(component, $(img->getGraphics()), 0, 0);
		$var($ImageFilter, filter, $new($WindowsLookAndFeel$RGBGrayFilter));
		$var($ImageProducer, producer, $new($FilteredImageSource, $(img->getSource()), filter));
		$var($Image, resultImage, component->createImage(producer));
		return $new($ImageIconUIResource, resultImage);
	}
	return $BasicLookAndFeel::getDisabledIcon(component, icon);
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$31($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($new($SortArrowIcon, false, "Table.sortIconColor"_s));
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$29($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($new($SortArrowIcon, true, "Table.sortIconColor"_s));
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$28($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($WindowsIconFactory::getMenuArrowIcon());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$27($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($WindowsIconFactory::getMenuItemArrowIcon());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$26($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($WindowsIconFactory::getMenuItemCheckIcon());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$25($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($WindowsIconFactory::getRadioButtonMenuItemIcon());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$24($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($WindowsIconFactory::getRadioButtonIcon());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$23($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($WindowsIconFactory::getCheckBoxIcon());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$22($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($BorderUIResource::getBlackLineBorderUIResource());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$21($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($WindowsBorders::getToolBarBorder());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$20($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($WindowsBorders::getTableHeaderBorder());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$19($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($BasicBorders::getRadioButtonBorder());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$18($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($WindowsBorders::getProgressBarBorder());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$16($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($BasicBorders::getMenuBarBorder());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$15($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($new($BasicBorders$MarginBorder));
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$13($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($WindowsBorders::getInternalFrameBorder());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$12($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($BorderUIResource::getEtchedBorderUIResource());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$11($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($WindowsBorders::getFocusCellHighlightBorder());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$10($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($BasicBorders::getTextFieldBorder());
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$9($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($BasicBorders::getButtonBorder());
}

$Object* WindowsLookAndFeel::lambda$initVistaComponentDefaults$8($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($new($ClassicSortArrowIcon, false));
}

$Object* WindowsLookAndFeel::lambda$initVistaComponentDefaults$7($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($new($ClassicSortArrowIcon, true));
}

$Object* WindowsLookAndFeel::lambda$initVistaComponentDefaults$6($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($BasicBorders::getInternalFrameBorder());
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$5($UIDefaults* t) {
	$useLocalCurrentObjectStackCache();
	$load($BasicLookAndFeel);
	return $of($new($WindowsInternalFrameTitlePane$ScalableIconUIResource, $$new($ObjectArray, {
		$($SwingUtilities2::makeIcon($of(this)->getClass(), $BasicLookAndFeel::class$, "icons/JavaCup16.png"_s)),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/JavaCup32.png"_s))
	})));
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$4($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($BorderUIResource::getLoweredBevelBorderUIResource());
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$3($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::DIALOG, $Font::BOLD, 12));
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$2($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::MONOSPACED, $Font::PLAIN, 12));
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$1($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::SANS_SERIF, $Font::PLAIN, 12));
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$0($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::DIALOG, $Font::PLAIN, 12));
}

void clinit$WindowsLookAndFeel($Class* class$) {
	WindowsLookAndFeel::$assertionsDisabled = !WindowsLookAndFeel::class$->desiredAssertionStatus();
	$assignStatic(WindowsLookAndFeel::HI_RES_DISABLED_ICON_CLIENT_KEY, $new($StringUIClientPropertyKey, "WindowsLookAndFeel.generateHiResDisabledIcon"_s));
	WindowsLookAndFeel::isMnemonicHidden$ = true;
	WindowsLookAndFeel::isClassicWindows$ = false;
}

WindowsLookAndFeel::WindowsLookAndFeel() {
}

$Class* WindowsLookAndFeel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27::load$(name, initialize);
		}
		if (name->equals(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28::classInfo$.name)) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28::load$(name, initialize);
		}
	}
	$loadClass(WindowsLookAndFeel, name, initialize, &_WindowsLookAndFeel_ClassInfo_, clinit$WindowsLookAndFeel, allocate$WindowsLookAndFeel);
	return class$;
}

$Class* WindowsLookAndFeel::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com