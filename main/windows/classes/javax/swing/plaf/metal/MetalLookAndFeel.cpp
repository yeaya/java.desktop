#include <javax/swing/plaf/metal/MetalLookAndFeel.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Toolkit.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalBorders$DialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$ErrorDialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$FrameBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$InternalFrameBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$MenuBarBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$MenuItemBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$OptionDialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$PaletteBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$PopupMenuBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$QuestionDialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$ScrollPaneBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$TableHeaderBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$ToolBarBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$WarningDialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalFontDesktopProperty.h>
#include <javax/swing/plaf/metal/MetalHighContrastTheme.h>
#include <javax/swing/plaf/metal/MetalIconFactory$PaletteCloseIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel$AATextListener.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel$FontActiveValue.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel$MetalLayoutStyle.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <javax/swing/plaf/metal/OceanTheme.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/DefaultLayoutStyle.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CONTROL_TEXT_FONT
#undef DARK
#undef FALSE
#undef INSTANCE
#undef LIGHT
#undef MENU_TEXT_FONT
#undef METAL_LOOK_AND_FEEL_INITED
#undef SUB_TEXT_FONT
#undef SYSTEM_TEXT_FONT
#undef TRUE
#undef USER_TEXT_FONT
#undef WINDOWS
#undef WINDOW_TITLE_FONT

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $BorderUIResource$LineBorderUIResource = ::javax::swing::plaf::BorderUIResource$LineBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalBorders$DialogBorder = ::javax::swing::plaf::metal::MetalBorders$DialogBorder;
using $MetalBorders$ErrorDialogBorder = ::javax::swing::plaf::metal::MetalBorders$ErrorDialogBorder;
using $MetalBorders$FrameBorder = ::javax::swing::plaf::metal::MetalBorders$FrameBorder;
using $MetalBorders$InternalFrameBorder = ::javax::swing::plaf::metal::MetalBorders$InternalFrameBorder;
using $MetalBorders$MenuBarBorder = ::javax::swing::plaf::metal::MetalBorders$MenuBarBorder;
using $MetalBorders$MenuItemBorder = ::javax::swing::plaf::metal::MetalBorders$MenuItemBorder;
using $MetalBorders$OptionDialogBorder = ::javax::swing::plaf::metal::MetalBorders$OptionDialogBorder;
using $MetalBorders$PaletteBorder = ::javax::swing::plaf::metal::MetalBorders$PaletteBorder;
using $MetalBorders$PopupMenuBorder = ::javax::swing::plaf::metal::MetalBorders$PopupMenuBorder;
using $MetalBorders$QuestionDialogBorder = ::javax::swing::plaf::metal::MetalBorders$QuestionDialogBorder;
using $MetalBorders$ScrollPaneBorder = ::javax::swing::plaf::metal::MetalBorders$ScrollPaneBorder;
using $MetalBorders$TableHeaderBorder = ::javax::swing::plaf::metal::MetalBorders$TableHeaderBorder;
using $MetalBorders$ToolBarBorder = ::javax::swing::plaf::metal::MetalBorders$ToolBarBorder;
using $MetalBorders$WarningDialogBorder = ::javax::swing::plaf::metal::MetalBorders$WarningDialogBorder;
using $MetalFontDesktopProperty = ::javax::swing::plaf::metal::MetalFontDesktopProperty;
using $MetalHighContrastTheme = ::javax::swing::plaf::metal::MetalHighContrastTheme;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;
using $MetalIconFactory$PaletteCloseIcon = ::javax::swing::plaf::metal::MetalIconFactory$PaletteCloseIcon;
using $MetalLookAndFeel$AATextListener = ::javax::swing::plaf::metal::MetalLookAndFeel$AATextListener;
using $MetalLookAndFeel$FontActiveValue = ::javax::swing::plaf::metal::MetalLookAndFeel$FontActiveValue;
using $MetalLookAndFeel$MetalLayoutStyle = ::javax::swing::plaf::metal::MetalLookAndFeel$MetalLayoutStyle;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $OceanTheme = ::javax::swing::plaf::metal::OceanTheme;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $AppContext = ::sun::awt::AppContext;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $DefaultLayoutStyle = ::sun::swing::DefaultLayoutStyle;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$UIDefaultsAccessor = ::sun::swing::SwingAccessor$UIDefaultsAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$0(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$1(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$2(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$3(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$4(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$5(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$($Color* controlShadow) {
		$set(this, controlShadow, controlShadow);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$6(controlShadow, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6>());
	}
	$Color* controlShadow = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::fieldInfos[2] = {
	{"controlShadow", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, controlShadow)},
	{}
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::*)($Color*)>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$7(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$8(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$9(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$10(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$11(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$($Color* controlDarkShadow) {
		$set(this, controlDarkShadow, controlDarkShadow);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$12(controlDarkShadow, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12>());
	}
	$Color* controlDarkShadow = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::fieldInfos[2] = {
	{"controlDarkShadow", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, controlDarkShadow)},
	{}
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::*)($Color*)>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$16(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$17(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$18(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$19(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$20(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$21(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$22(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$23(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$24(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$25(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$26(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$27(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$28(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$29(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$30(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$31(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$32(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$33(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$34(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t internalFrameIconSize) {
		this->internalFrameIconSize = internalFrameIconSize;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$35(internalFrameIconSize, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32>());
	}
	int32_t internalFrameIconSize = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::fieldInfos[2] = {
	{"internalFrameIconSize", "I", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, internalFrameIconSize)},
	{}
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::*)(int32_t)>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t internalFrameIconSize) {
		this->internalFrameIconSize = internalFrameIconSize;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$36(internalFrameIconSize, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33>());
	}
	int32_t internalFrameIconSize = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::fieldInfos[2] = {
	{"internalFrameIconSize", "I", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33, internalFrameIconSize)},
	{}
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::*)(int32_t)>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t internalFrameIconSize) {
		this->internalFrameIconSize = internalFrameIconSize;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$37(internalFrameIconSize, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34>());
	}
	int32_t internalFrameIconSize = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::fieldInfos[2] = {
	{"internalFrameIconSize", "I", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34, internalFrameIconSize)},
	{}
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::*)(int32_t)>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t internalFrameIconSize) {
		this->internalFrameIconSize = internalFrameIconSize;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$38(internalFrameIconSize, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35>());
	}
	int32_t internalFrameIconSize = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::fieldInfos[2] = {
	{"internalFrameIconSize", "I", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35, internalFrameIconSize)},
	{}
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::*)(int32_t)>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$39(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$40(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$41(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$43(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$44(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$46(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$51(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$52(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$53(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$54(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$55(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$56(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$57(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48::*)()>(&MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48::class$ = nullptr;

$FieldInfo _MetalLookAndFeel_FieldInfo_[] = {
	{"METAL_LOOK_AND_FEEL_INITED", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel, METAL_LOOK_AND_FEEL_INITED)},
	{"checkedWindows", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel, checkedWindows)},
	{"isWindows", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel, isWindows$)},
	{"checkedSystemFontSettings", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel, checkedSystemFontSettings)},
	{"useSystemFonts", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel, useSystemFonts$)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljavax/swing/LookAndFeel;>;", $STATIC, $staticField(MetalLookAndFeel, queue)},
	{}
};

$MethodInfo _MetalLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLookAndFeel::*)()>(&MetalLookAndFeel::init$))},
	{"createDefaultTheme", "()V", nullptr, $PROTECTED},
	{"flushUnreferenced", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&MetalLookAndFeel::flushUnreferenced))},
	{"getAcceleratorForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getAcceleratorForeground))},
	{"getAcceleratorSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getAcceleratorSelectedForeground))},
	{"getBlack", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getBlack))},
	{"getControl", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getControl))},
	{"getControlDarkShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getControlDarkShadow))},
	{"getControlDisabled", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getControlDisabled))},
	{"getControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getControlHighlight))},
	{"getControlInfo", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getControlInfo))},
	{"getControlShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getControlShadow))},
	{"getControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getControlTextColor))},
	{"getControlTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&MetalLookAndFeel::getControlTextFont))},
	{"getCurrentTheme", "()Ljavax/swing/plaf/metal/MetalTheme;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MetalTheme*(*)()>(&MetalLookAndFeel::getCurrentTheme))},
	{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDesktopColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getDesktopColor))},
	{"getDisabledIcon", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getDisabledSelectedIcon", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getFocusColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getFocusColor))},
	{"getHighlightedTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getHighlightedTextColor))},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInactiveControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getInactiveControlTextColor))},
	{"getInactiveSystemTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getInactiveSystemTextColor))},
	{"getLayoutStyle", "()Ljavax/swing/LayoutStyle;", nullptr, $PUBLIC},
	{"getMenuBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getMenuBackground))},
	{"getMenuDisabledForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getMenuDisabledForeground))},
	{"getMenuForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getMenuForeground))},
	{"getMenuSelectedBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getMenuSelectedBackground))},
	{"getMenuSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getMenuSelectedForeground))},
	{"getMenuTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&MetalLookAndFeel::getMenuTextFont))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrimaryControl", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getPrimaryControl))},
	{"getPrimaryControlDarkShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getPrimaryControlDarkShadow))},
	{"getPrimaryControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getPrimaryControlHighlight))},
	{"getPrimaryControlInfo", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getPrimaryControlInfo))},
	{"getPrimaryControlShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getPrimaryControlShadow))},
	{"getSeparatorBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getSeparatorBackground))},
	{"getSeparatorForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getSeparatorForeground))},
	{"getSubTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&MetalLookAndFeel::getSubTextFont))},
	{"getSupportsWindowDecorations", "()Z", nullptr, $PUBLIC},
	{"getSystemTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getSystemTextColor))},
	{"getSystemTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&MetalLookAndFeel::getSystemTextFont))},
	{"getTextHighlightColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getTextHighlightColor))},
	{"getUserTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getUserTextColor))},
	{"getUserTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&MetalLookAndFeel::getUserTextFont))},
	{"getWhite", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getWhite))},
	{"getWindowBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getWindowBackground))},
	{"getWindowTitleBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getWindowTitleBackground))},
	{"getWindowTitleFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&MetalLookAndFeel::getWindowTitleFont))},
	{"getWindowTitleForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getWindowTitleForeground))},
	{"getWindowTitleInactiveBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getWindowTitleInactiveBackground))},
	{"getWindowTitleInactiveForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorUIResource*(*)()>(&MetalLookAndFeel::getWindowTitleInactiveForeground))},
	{"initClassDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initResourceBundle", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalLookAndFeel::*)($UIDefaults*)>(&MetalLookAndFeel::initResourceBundle))},
	{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"isWindows", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&MetalLookAndFeel::isWindows))},
	{"lambda$initComponentDefaults$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$0))},
	{"lambda$initComponentDefaults$1", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$1))},
	{"lambda$initComponentDefaults$10", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$10))},
	{"lambda$initComponentDefaults$11", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$11))},
	{"lambda$initComponentDefaults$12", "(Ljava/awt/Color;Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($Color*,$UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$12))},
	{"lambda$initComponentDefaults$16", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$16))},
	{"lambda$initComponentDefaults$17", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$17))},
	{"lambda$initComponentDefaults$18", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$18))},
	{"lambda$initComponentDefaults$19", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$19))},
	{"lambda$initComponentDefaults$2", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$2))},
	{"lambda$initComponentDefaults$20", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$20))},
	{"lambda$initComponentDefaults$21", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$21))},
	{"lambda$initComponentDefaults$22", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$22))},
	{"lambda$initComponentDefaults$23", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$23))},
	{"lambda$initComponentDefaults$24", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$24))},
	{"lambda$initComponentDefaults$25", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$25))},
	{"lambda$initComponentDefaults$26", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$26))},
	{"lambda$initComponentDefaults$27", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$27))},
	{"lambda$initComponentDefaults$28", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$28))},
	{"lambda$initComponentDefaults$29", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$29))},
	{"lambda$initComponentDefaults$3", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$3))},
	{"lambda$initComponentDefaults$30", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$30))},
	{"lambda$initComponentDefaults$31", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$31))},
	{"lambda$initComponentDefaults$32", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$32))},
	{"lambda$initComponentDefaults$33", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$33))},
	{"lambda$initComponentDefaults$34", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$34))},
	{"lambda$initComponentDefaults$35", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(int32_t,$UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$35))},
	{"lambda$initComponentDefaults$36", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(int32_t,$UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$36))},
	{"lambda$initComponentDefaults$37", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(int32_t,$UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$37))},
	{"lambda$initComponentDefaults$38", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(int32_t,$UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$38))},
	{"lambda$initComponentDefaults$39", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$39))},
	{"lambda$initComponentDefaults$4", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$4))},
	{"lambda$initComponentDefaults$40", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$40))},
	{"lambda$initComponentDefaults$41", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$41))},
	{"lambda$initComponentDefaults$43", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$43))},
	{"lambda$initComponentDefaults$44", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$44))},
	{"lambda$initComponentDefaults$46", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$46))},
	{"lambda$initComponentDefaults$5", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$5))},
	{"lambda$initComponentDefaults$51", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$51))},
	{"lambda$initComponentDefaults$52", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$52))},
	{"lambda$initComponentDefaults$53", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$53))},
	{"lambda$initComponentDefaults$54", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$54))},
	{"lambda$initComponentDefaults$55", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$55))},
	{"lambda$initComponentDefaults$56", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$56))},
	{"lambda$initComponentDefaults$57", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$57))},
	{"lambda$initComponentDefaults$6", "(Ljava/awt/Color;Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($Color*,$UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$6))},
	{"lambda$initComponentDefaults$7", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$7))},
	{"lambda$initComponentDefaults$8", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$8))},
	{"lambda$initComponentDefaults$9", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&MetalLookAndFeel::lambda$initComponentDefaults$9))},
	{"provideErrorFeedback", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setCurrentTheme", "(Ljavax/swing/plaf/metal/MetalTheme;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MetalTheme*)>(&MetalLookAndFeel::setCurrentTheme))},
	{"useHighContrastTheme", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&MetalLookAndFeel::useHighContrastTheme))},
	{"useSystemFonts", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&MetalLookAndFeel::useSystemFonts))},
	{"usingOcean", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&MetalLookAndFeel::usingOcean))},
	{}
};

$InnerClassInfo _MetalLookAndFeel_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalLookAndFeel$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.swing.plaf.metal.MetalLookAndFeel$MetalLayoutStyle", "javax.swing.plaf.metal.MetalLookAndFeel", "MetalLayoutStyle", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener", "javax.swing.plaf.metal.MetalLookAndFeel", "AATextListener", $STATIC},
	{"javax.swing.plaf.metal.MetalLookAndFeel$FontActiveValue", "javax.swing.plaf.metal.MetalLookAndFeel", "FontActiveValue", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalLookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalLookAndFeel",
	"javax.swing.plaf.basic.BasicLookAndFeel",
	nullptr,
	_MetalLookAndFeel_FieldInfo_,
	_MetalLookAndFeel_MethodInfo_,
	nullptr,
	nullptr,
	_MetalLookAndFeel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalLookAndFeel$1,javax.swing.plaf.metal.MetalLookAndFeel$MetalLayoutStyle,javax.swing.plaf.metal.MetalLookAndFeel$AATextListener,javax.swing.plaf.metal.MetalLookAndFeel$AATextListener$1,javax.swing.plaf.metal.MetalLookAndFeel$FontActiveValue"
};

$Object* allocate$MetalLookAndFeel($Class* clazz) {
	return $of($alloc(MetalLookAndFeel));
}

bool MetalLookAndFeel::METAL_LOOK_AND_FEEL_INITED = false;
bool MetalLookAndFeel::checkedWindows = false;
bool MetalLookAndFeel::isWindows$ = false;
bool MetalLookAndFeel::checkedSystemFontSettings = false;
bool MetalLookAndFeel::useSystemFonts$ = false;
$ReferenceQueue* MetalLookAndFeel::queue = nullptr;

void MetalLookAndFeel::init$() {
	$BasicLookAndFeel::init$();
}

bool MetalLookAndFeel::isWindows() {
	$init(MetalLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!MetalLookAndFeel::checkedWindows) {
		$OSInfo$OSType* osType = $cast($OSInfo$OSType, $AccessController::doPrivileged($($OSInfo::getOSTypeAction())));
		$init($OSInfo$OSType);
		if (osType == $OSInfo$OSType::WINDOWS) {
			MetalLookAndFeel::isWindows$ = true;
			$var($String, systemFonts, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.useSystemFontSettings"_s)))));
			MetalLookAndFeel::useSystemFonts$ = (systemFonts != nullptr && ($nc($($Boolean::valueOf(systemFonts)))->booleanValue()));
		}
		MetalLookAndFeel::checkedWindows = true;
	}
	return MetalLookAndFeel::isWindows$;
}

bool MetalLookAndFeel::useSystemFonts() {
	$init(MetalLookAndFeel);
	if (isWindows() && MetalLookAndFeel::useSystemFonts$) {
		if (MetalLookAndFeel::METAL_LOOK_AND_FEEL_INITED) {
			$var($Object, value, $UIManager::get("Application.useSystemFontSettings"_s));
			$init($Boolean);
			return (value == nullptr || $nc($Boolean::TRUE)->equals(value));
		}
		return true;
	}
	return false;
}

bool MetalLookAndFeel::useHighContrastTheme() {
	$init(MetalLookAndFeel);
	$useLocalCurrentObjectStackCache();
	bool var$0 = isWindows();
	if (var$0 && useSystemFonts()) {
		$var($Boolean, highContrast, $cast($Boolean, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("win.highContrast.on"_s)));
		return (highContrast == nullptr) ? false : $nc(highContrast)->booleanValue();
	}
	return false;
}

bool MetalLookAndFeel::usingOcean() {
	$init(MetalLookAndFeel);
	return ($instanceOf($OceanTheme, $(getCurrentTheme())));
}

$String* MetalLookAndFeel::getName() {
	return "Metal"_s;
}

$String* MetalLookAndFeel::getID() {
	return "Metal"_s;
}

$String* MetalLookAndFeel::getDescription() {
	return "The Java(tm) Look and Feel"_s;
}

bool MetalLookAndFeel::isNativeLookAndFeel() {
	return false;
}

bool MetalLookAndFeel::isSupportedLookAndFeel() {
	return true;
}

bool MetalLookAndFeel::getSupportsWindowDecorations() {
	return true;
}

void MetalLookAndFeel::initClassDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$BasicLookAndFeel::initClassDefaults(table);
	$var($String, metalPackageName, "javax.swing.plaf.metal."_s);
	$var($ObjectArray, uiDefaults, $new($ObjectArray, {
		$of("ButtonUI"_s),
		$of($$str({metalPackageName, "MetalButtonUI"_s})),
		$of("CheckBoxUI"_s),
		$of($$str({metalPackageName, "MetalCheckBoxUI"_s})),
		$of("ComboBoxUI"_s),
		$of($$str({metalPackageName, "MetalComboBoxUI"_s})),
		$of("DesktopIconUI"_s),
		$of($$str({metalPackageName, "MetalDesktopIconUI"_s})),
		$of("FileChooserUI"_s),
		$of($$str({metalPackageName, "MetalFileChooserUI"_s})),
		$of("InternalFrameUI"_s),
		$of($$str({metalPackageName, "MetalInternalFrameUI"_s})),
		$of("LabelUI"_s),
		$of($$str({metalPackageName, "MetalLabelUI"_s})),
		$of("PopupMenuSeparatorUI"_s),
		$of($$str({metalPackageName, "MetalPopupMenuSeparatorUI"_s})),
		$of("ProgressBarUI"_s),
		$of($$str({metalPackageName, "MetalProgressBarUI"_s})),
		$of("RadioButtonUI"_s),
		$of($$str({metalPackageName, "MetalRadioButtonUI"_s})),
		$of("ScrollBarUI"_s),
		$of($$str({metalPackageName, "MetalScrollBarUI"_s})),
		$of("ScrollPaneUI"_s),
		$of($$str({metalPackageName, "MetalScrollPaneUI"_s})),
		$of("SeparatorUI"_s),
		$of($$str({metalPackageName, "MetalSeparatorUI"_s})),
		$of("SliderUI"_s),
		$of($$str({metalPackageName, "MetalSliderUI"_s})),
		$of("SplitPaneUI"_s),
		$of($$str({metalPackageName, "MetalSplitPaneUI"_s})),
		$of("TabbedPaneUI"_s),
		$of($$str({metalPackageName, "MetalTabbedPaneUI"_s})),
		$of("TextFieldUI"_s),
		$of($$str({metalPackageName, "MetalTextFieldUI"_s})),
		$of("ToggleButtonUI"_s),
		$of($$str({metalPackageName, "MetalToggleButtonUI"_s})),
		$of("ToolBarUI"_s),
		$of($$str({metalPackageName, "MetalToolBarUI"_s})),
		$of("ToolTipUI"_s),
		$of($$str({metalPackageName, "MetalToolTipUI"_s})),
		$of("TreeUI"_s),
		$of($$str({metalPackageName, "MetalTreeUI"_s})),
		$of("RootPaneUI"_s),
		$of($$str({metalPackageName, "MetalRootPaneUI"_s}))
	}));
	$nc(table)->putDefaults(uiDefaults);
}

void MetalLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$var($MetalTheme, theme, getCurrentTheme());
	$var($Color, control, $nc(theme)->getControl());
	$var($ObjectArray, systemColors, $new($ObjectArray, {
		$of("desktop"_s),
		$($of(theme->getDesktopColor())),
		$of("activeCaption"_s),
		$($of(theme->getWindowTitleBackground())),
		$of("activeCaptionText"_s),
		$($of(theme->getWindowTitleForeground())),
		$of("activeCaptionBorder"_s),
		$($of(theme->getPrimaryControlShadow())),
		$of("inactiveCaption"_s),
		$($of(theme->getWindowTitleInactiveBackground())),
		$of("inactiveCaptionText"_s),
		$($of(theme->getWindowTitleInactiveForeground())),
		$of("inactiveCaptionBorder"_s),
		$($of(theme->getControlShadow())),
		$of("window"_s),
		$($of(theme->getWindowBackground())),
		$of("windowBorder"_s),
		$of(control),
		$of("windowText"_s),
		$($of(theme->getUserTextColor())),
		$of("menu"_s),
		$($of(theme->getMenuBackground())),
		$of("menuText"_s),
		$($of(theme->getMenuForeground())),
		$of("text"_s),
		$($of(theme->getWindowBackground())),
		$of("textText"_s),
		$($of(theme->getUserTextColor())),
		$of("textHighlight"_s),
		$($of(theme->getTextHighlightColor())),
		$of("textHighlightText"_s),
		$($of(theme->getHighlightedTextColor())),
		$of("textInactiveText"_s),
		$($of(theme->getInactiveSystemTextColor())),
		$of("control"_s),
		$of(control),
		$of("controlText"_s),
		$($of(theme->getControlTextColor())),
		$of("controlHighlight"_s),
		$($of(theme->getControlHighlight())),
		$of("controlLtHighlight"_s),
		$($of(theme->getControlHighlight())),
		$of("controlShadow"_s),
		$($of(theme->getControlShadow())),
		$of("controlDkShadow"_s),
		$($of(theme->getControlDarkShadow())),
		$of("scrollbar"_s),
		$of(control),
		$of("info"_s),
		$($of(theme->getPrimaryControl())),
		$of("infoText"_s),
		$($of(theme->getPrimaryControlInfo()))
	}));
	$nc(table)->putDefaults(systemColors);
}

void MetalLookAndFeel::initResourceBundle($UIDefaults* table) {
	$nc($($SwingAccessor::getUIDefaultsAccessor()))->addInternalBundle(table, "com.sun.swing.internal.plaf.metal.resources.metal"_s);
}

void MetalLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$BasicLookAndFeel::initComponentDefaults(table);
	initResourceBundle(table);
	$var($Color, acceleratorForeground, getAcceleratorForeground());
	$var($Color, acceleratorSelectedForeground, getAcceleratorSelectedForeground());
	$var($Color, control, getControl());
	$var($Color, controlHighlight, getControlHighlight());
	$var($Color, controlShadow, getControlShadow());
	$var($Color, controlDarkShadow, getControlDarkShadow());
	$var($Color, controlTextColor, getControlTextColor());
	$var($Color, focusColor, getFocusColor());
	$var($Color, inactiveControlTextColor, getInactiveControlTextColor());
	$var($Color, menuBackground, getMenuBackground());
	$var($Color, menuSelectedBackground, getMenuSelectedBackground());
	$var($Color, menuDisabledForeground, getMenuDisabledForeground());
	$var($Color, menuSelectedForeground, getMenuSelectedForeground());
	$var($Color, primaryControl, getPrimaryControl());
	$var($Color, primaryControlDarkShadow, getPrimaryControlDarkShadow());
	$var($Color, primaryControlShadow, getPrimaryControlShadow());
	$var($Color, systemTextColor, getSystemTextColor());
	$var($Insets, zeroInsets, $new($InsetsUIResource, 0, 0, 0, 0));
	$var($Integer, zero, $Integer::valueOf(0));
	$var($UIDefaults$LazyValue, textFieldBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0)));
	$var($UIDefaults$LazyValue, dialogBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1)));
	$var($UIDefaults$LazyValue, questionDialogBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2)));
	$init($DefaultEditorKit);
	$init($JTextField);
	$var($Object, fieldInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
		$of("toggle-componentOrientation"_s)
	})));
	$var($Object, passwordInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
		$of($DefaultEditorKit::beginLineAction),
		$of("ctrl KP_LEFT"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("ctrl RIGHT"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("ctrl KP_RIGHT"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("ctrl shift LEFT"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("ctrl shift KP_LEFT"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("ctrl shift RIGHT"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("ctrl shift KP_RIGHT"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
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
		$of("toggle-componentOrientation"_s)
	})));
	$var($Object, multilineInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
		$of("UP"_s),
		$of($DefaultEditorKit::upAction),
		$of("KP_UP"_s),
		$of($DefaultEditorKit::upAction),
		$of("DOWN"_s),
		$of($DefaultEditorKit::downAction),
		$of("KP_DOWN"_s),
		$of($DefaultEditorKit::downAction),
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
		$of("shift KP_UP"_s),
		$of($DefaultEditorKit::selectionUpAction),
		$of("shift DOWN"_s),
		$of($DefaultEditorKit::selectionDownAction),
		$of("shift KP_DOWN"_s),
		$of($DefaultEditorKit::selectionDownAction),
		$of("ENTER"_s),
		$of($DefaultEditorKit::insertBreakAction),
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
		$of("TAB"_s),
		$of($DefaultEditorKit::insertTabAction),
		$of("ctrl BACK_SLASH"_s),
		$of("unselect"_s),
		$of("ctrl HOME"_s),
		$of($DefaultEditorKit::beginAction),
		$of("ctrl END"_s),
		$of($DefaultEditorKit::endAction),
		$of("ctrl shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginAction),
		$of("ctrl shift END"_s),
		$of($DefaultEditorKit::selectionEndAction),
		$of("ctrl T"_s),
		$of("next-link-action"_s),
		$of("ctrl shift T"_s),
		$of("previous-link-action"_s),
		$of("ctrl SPACE"_s),
		$of("activate-link-action"_s),
		$of("control shift O"_s),
		$of("toggle-componentOrientation"_s)
	})));
	$var($UIDefaults$LazyValue, scrollPaneBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3)));
	$var($UIDefaults$LazyValue, buttonBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4)));
	$var($UIDefaults$LazyValue, toggleButtonBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5)));
	$var($UIDefaults$LazyValue, titledBorderBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, controlShadow)));
	$var($UIDefaults$LazyValue, desktopIconBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7)));
	$var($UIDefaults$LazyValue, menuBarBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8)));
	$var($UIDefaults$LazyValue, popupMenuBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9)));
	$var($UIDefaults$LazyValue, menuItemBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10)));
	$var($Object, menuItemAcceleratorDelimiter, "-"_s);
	$var($UIDefaults$LazyValue, toolBarBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11)));
	$var($UIDefaults$LazyValue, progressBarBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, controlDarkShadow)));
	$var($UIDefaults$LazyValue, toolTipBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, primaryControlDarkShadow)));
	$var($UIDefaults$LazyValue, toolTipBorderInactive, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, controlDarkShadow)));
	$var($UIDefaults$LazyValue, focusCellHighlightBorder, static_cast<$UIDefaults$LazyValue*>($new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, focusColor)));
	$var($Object, tabbedPaneTabAreaInsets, $new($InsetsUIResource, 4, 2, 0, 6));
	$var($Object, tabbedPaneTabInsets, $new($InsetsUIResource, 0, 9, 1, 9));
	int32_t internalFrameIconSize = 16;
	$var($ObjectArray, defaultCueList, $new($ObjectArray, {
		$of("OptionPane.errorSound"_s),
		$of("OptionPane.informationSound"_s),
		$of("OptionPane.questionSound"_s),
		$of("OptionPane.warningSound"_s)
	}));
	$var($MetalTheme, theme, getCurrentTheme());
	$var($Object, menuTextValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::MENU_TEXT_FONT));
	$var($Object, controlTextValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::CONTROL_TEXT_FONT));
	$var($Object, userTextValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::USER_TEXT_FONT));
	$var($Object, windowTitleValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::WINDOW_TITLE_FONT));
	$var($Object, subTextValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::SUB_TEXT_FONT));
	$var($Object, systemTextValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::SYSTEM_TEXT_FONT));
	$init($Boolean);
	$var($ObjectArray, defaults, $new($ObjectArray, {
		$of("AuditoryCues.defaultCueList"_s),
		$of(defaultCueList),
		$of("AuditoryCues.playList"_s),
		($Object*)nullptr,
		$of("TextField.border"_s),
		$of(textFieldBorder),
		$of("TextField.font"_s),
		userTextValue,
		$of("PasswordField.border"_s),
		$of(textFieldBorder),
		$of("PasswordField.font"_s),
		userTextValue,
		$of("PasswordField.echoChar"_s),
		$($of($Character::valueOf((char16_t)8226))),
		$of("TextArea.font"_s),
		userTextValue,
		$of("TextPane.background"_s),
		$($nc(table)->get("window"_s)),
		$of("TextPane.font"_s),
		userTextValue,
		$of("EditorPane.background"_s),
		$(table->get("window"_s)),
		$of("EditorPane.font"_s),
		userTextValue,
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
		$of("FormattedTextField.border"_s),
		$of(textFieldBorder),
		$of("FormattedTextField.font"_s),
		userTextValue,
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
		$of("Button.defaultButtonFollowsFocus"_s),
		$of($Boolean::FALSE),
		$of("Button.disabledText"_s),
		$of(inactiveControlTextColor),
		$of("Button.select"_s),
		$of(controlShadow),
		$of("Button.border"_s),
		$of(buttonBorder),
		$of("Button.font"_s),
		controlTextValue,
		$of("Button.focus"_s),
		$of(focusColor),
		$of("Button.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("CheckBox.disabledText"_s),
		$of(inactiveControlTextColor),
		$of("Checkbox.select"_s),
		$of(controlShadow),
		$of("CheckBox.font"_s),
		controlTextValue,
		$of("CheckBox.focus"_s),
		$of(focusColor),
		$of("CheckBox.icon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13)),
		$of("CheckBox.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("CheckBox.totalInsets"_s),
		$of($$new($Insets, 4, 4, 4, 4)),
		$of("RadioButton.disabledText"_s),
		$of(inactiveControlTextColor),
		$of("RadioButton.select"_s),
		$of(controlShadow),
		$of("RadioButton.icon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14)),
		$of("RadioButton.font"_s),
		controlTextValue,
		$of("RadioButton.focus"_s),
		$of(focusColor),
		$of("RadioButton.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("RadioButton.totalInsets"_s),
		$of($$new($Insets, 4, 4, 4, 4)),
		$of("ToggleButton.select"_s),
		$of(controlShadow),
		$of("ToggleButton.disabledText"_s),
		$of(inactiveControlTextColor),
		$of("ToggleButton.focus"_s),
		$of(focusColor),
		$of("ToggleButton.border"_s),
		$of(toggleButtonBorder),
		$of("ToggleButton.font"_s),
		controlTextValue,
		$of("ToggleButton.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("FileView.directoryIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15)),
		$of("FileView.fileIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16)),
		$of("FileView.computerIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17)),
		$of("FileView.hardDriveIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18)),
		$of("FileView.floppyDriveIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19)),
		$of("FileChooser.detailsViewIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20)),
		$of("FileChooser.homeFolderIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21)),
		$of("FileChooser.listViewIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22)),
		$of("FileChooser.newFolderIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23)),
		$of("FileChooser.upFolderIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24)),
		$of("FileChooser.usesSingleFilePane"_s),
		$of($Boolean::TRUE),
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
		$of("ToolTip.font"_s),
		systemTextValue,
		$of("ToolTip.border"_s),
		$of(toolTipBorder),
		$of("ToolTip.borderInactive"_s),
		$of(toolTipBorderInactive),
		$of("ToolTip.backgroundInactive"_s),
		$of(control),
		$of("ToolTip.foregroundInactive"_s),
		$of(controlDarkShadow),
		$of("ToolTip.hideAccelerator"_s),
		$of($Boolean::FALSE),
		$of("ToolTipManager.enableToolTipMode"_s),
		$of("activeApplication"_s),
		$of("Slider.font"_s),
		controlTextValue,
		$of("Slider.border"_s),
		($Object*)nullptr,
		$of("Slider.foreground"_s),
		$of(primaryControlShadow),
		$of("Slider.focus"_s),
		$of(focusColor),
		$of("Slider.focusInsets"_s),
		$of(zeroInsets),
		$of("Slider.trackWidth"_s),
		$($of($Integer::valueOf(7))),
		$of("Slider.majorTickLength"_s),
		$($of($Integer::valueOf(6))),
		$of("Slider.horizontalThumbIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25)),
		$of("Slider.verticalThumbIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26)),
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
			$of("ctrl PAGE_DOWN"_s),
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
			$of("ctrl PAGE_UP"_s),
			$of("positiveBlockIncrement"_s),
			$of("HOME"_s),
			$of("minScroll"_s),
			$of("END"_s),
			$of("maxScroll"_s)
		}))),
		$of("ProgressBar.font"_s),
		controlTextValue,
		$of("ProgressBar.foreground"_s),
		$of(primaryControlShadow),
		$of("ProgressBar.selectionBackground"_s),
		$of(primaryControlDarkShadow),
		$of("ProgressBar.border"_s),
		$of(progressBarBorder),
		$of("ProgressBar.cellSpacing"_s),
		$of(zero),
		$of("ProgressBar.cellLength"_s),
		$($of($Integer::valueOf(1))),
		$of("ComboBox.background"_s),
		$of(control),
		$of("ComboBox.foreground"_s),
		$of(controlTextColor),
		$of("ComboBox.selectionBackground"_s),
		$of(primaryControlShadow),
		$of("ComboBox.selectionForeground"_s),
		$of(controlTextColor),
		$of("ComboBox.font"_s),
		controlTextValue,
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
			$of("selectNext"_s),
			$of("KP_DOWN"_s),
			$of("selectNext"_s),
			$of("alt DOWN"_s),
			$of("togglePopup"_s),
			$of("alt KP_DOWN"_s),
			$of("togglePopup"_s),
			$of("alt UP"_s),
			$of("togglePopup"_s),
			$of("alt KP_UP"_s),
			$of("togglePopup"_s),
			$of("SPACE"_s),
			$of("spacePopup"_s),
			$of("ENTER"_s),
			$of("enterPressed"_s),
			$of("UP"_s),
			$of("selectPrevious"_s),
			$of("KP_UP"_s),
			$of("selectPrevious"_s)
		}))),
		$of("InternalFrame.icon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27)),
		$of("InternalFrame.border"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28)),
		$of("InternalFrame.optionDialogBorder"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29)),
		$of("InternalFrame.paletteBorder"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30)),
		$of("InternalFrame.paletteTitleHeight"_s),
		$($of($Integer::valueOf(11))),
		$of("InternalFrame.paletteCloseIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31)),
		$of("InternalFrame.closeIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, internalFrameIconSize)),
		$of("InternalFrame.maximizeIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33, internalFrameIconSize)),
		$of("InternalFrame.iconifyIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34, internalFrameIconSize)),
		$of("InternalFrame.minimizeIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35, internalFrameIconSize)),
		$of("InternalFrame.titleFont"_s),
		windowTitleValue,
		$of("InternalFrame.windowBindings"_s),
		($Object*)nullptr,
		$of("InternalFrame.closeSound"_s),
		$of("sounds/FrameClose.wav"_s),
		$of("InternalFrame.maximizeSound"_s),
		$of("sounds/FrameMaximize.wav"_s),
		$of("InternalFrame.minimizeSound"_s),
		$of("sounds/FrameMinimize.wav"_s),
		$of("InternalFrame.restoreDownSound"_s),
		$of("sounds/FrameRestoreDown.wav"_s),
		$of("InternalFrame.restoreUpSound"_s),
		$of("sounds/FrameRestoreUp.wav"_s),
		$of("DesktopIcon.border"_s),
		$of(desktopIconBorder),
		$of("DesktopIcon.font"_s),
		controlTextValue,
		$of("DesktopIcon.foreground"_s),
		$of(controlTextColor),
		$of("DesktopIcon.background"_s),
		$of(control),
		$of("DesktopIcon.width"_s),
		$($of($Integer::valueOf(160))),
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
			$of("shift RIGHT"_s),
			$of("shrinkRight"_s),
			$of("shift KP_RIGHT"_s),
			$of("shrinkRight"_s),
			$of("LEFT"_s),
			$of("left"_s),
			$of("KP_LEFT"_s),
			$of("left"_s),
			$of("shift LEFT"_s),
			$of("shrinkLeft"_s),
			$of("shift KP_LEFT"_s),
			$of("shrinkLeft"_s),
			$of("UP"_s),
			$of("up"_s),
			$of("KP_UP"_s),
			$of("up"_s),
			$of("shift UP"_s),
			$of("shrinkUp"_s),
			$of("shift KP_UP"_s),
			$of("shrinkUp"_s),
			$of("DOWN"_s),
			$of("down"_s),
			$of("KP_DOWN"_s),
			$of("down"_s),
			$of("shift DOWN"_s),
			$of("shrinkDown"_s),
			$of("shift KP_DOWN"_s),
			$of("shrinkDown"_s),
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
		$of("TitledBorder.font"_s),
		controlTextValue,
		$of("TitledBorder.titleColor"_s),
		$of(systemTextColor),
		$of("TitledBorder.border"_s),
		$of(titledBorderBorder),
		$of("Label.font"_s),
		controlTextValue,
		$of("Label.foreground"_s),
		$of(systemTextColor),
		$of("Label.disabledForeground"_s),
		$($of(getInactiveSystemTextColor())),
		$of("List.font"_s),
		controlTextValue,
		$of("List.focusCellHighlightBorder"_s),
		$of(focusCellHighlightBorder),
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
		$of("ScrollBar.background"_s),
		$of(control),
		$of("ScrollBar.highlight"_s),
		$of(controlHighlight),
		$of("ScrollBar.shadow"_s),
		$of(controlShadow),
		$of("ScrollBar.darkShadow"_s),
		$of(controlDarkShadow),
		$of("ScrollBar.thumb"_s),
		$of(primaryControlShadow),
		$of("ScrollBar.thumbShadow"_s),
		$of(primaryControlDarkShadow),
		$of("ScrollBar.thumbHighlight"_s),
		$of(primaryControl),
		$of("ScrollBar.width"_s),
		$($of($Integer::valueOf(17))),
		$of("ScrollBar.allowsAbsolutePositioning"_s),
		$of($Boolean::TRUE),
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
			$of("HOME"_s),
			$of("minScroll"_s),
			$of("END"_s),
			$of("maxScroll"_s)
		}))),
		$of("ScrollPane.border"_s),
		$of(scrollPaneBorder),
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
		$of("TabbedPane.font"_s),
		controlTextValue,
		$of("TabbedPane.tabAreaBackground"_s),
		$of(control),
		$of("TabbedPane.background"_s),
		$of(controlShadow),
		$of("TabbedPane.light"_s),
		$of(control),
		$of("TabbedPane.focus"_s),
		$of(primaryControlDarkShadow),
		$of("TabbedPane.selected"_s),
		$of(control),
		$of("TabbedPane.selectHighlight"_s),
		$of(controlHighlight),
		$of("TabbedPane.tabAreaInsets"_s),
		tabbedPaneTabAreaInsets,
		$of("TabbedPane.tabInsets"_s),
		tabbedPaneTabInsets,
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
		userTextValue,
		$of("Table.focusCellHighlightBorder"_s),
		$of(focusCellHighlightBorder),
		$of("Table.scrollPaneBorder"_s),
		$of(scrollPaneBorder),
		$of("Table.dropLineColor"_s),
		$of(focusColor),
		$of("Table.dropLineShortColor"_s),
		$of(primaryControlDarkShadow),
		$of("Table.gridColor"_s),
		$of(controlShadow),
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
		$of("Table.ascendingSortIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), MetalLookAndFeel::class$, "icons/sortUp.png"_s)),
		$of("Table.descendingSortIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), MetalLookAndFeel::class$, "icons/sortDown.png"_s)),
		$of("TableHeader.font"_s),
		userTextValue,
		$of("TableHeader.cellBorder"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36)),
		$of("MenuBar.border"_s),
		$of(menuBarBorder),
		$of("MenuBar.font"_s),
		menuTextValue,
		$of("MenuBar.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("F10"_s),
			$of("takeFocus"_s)
		})),
		$of("Menu.border"_s),
		$of(menuItemBorder),
		$of("Menu.borderPainted"_s),
		$of($Boolean::TRUE),
		$of("Menu.menuPopupOffsetX"_s),
		$of(zero),
		$of("Menu.menuPopupOffsetY"_s),
		$of(zero),
		$of("Menu.submenuPopupOffsetX"_s),
		$($of($Integer::valueOf(-4))),
		$of("Menu.submenuPopupOffsetY"_s),
		$($of($Integer::valueOf(-3))),
		$of("Menu.font"_s),
		menuTextValue,
		$of("Menu.selectionForeground"_s),
		$of(menuSelectedForeground),
		$of("Menu.selectionBackground"_s),
		$of(menuSelectedBackground),
		$of("Menu.disabledForeground"_s),
		$of(menuDisabledForeground),
		$of("Menu.acceleratorFont"_s),
		subTextValue,
		$of("Menu.acceleratorForeground"_s),
		$of(acceleratorForeground),
		$of("Menu.acceleratorSelectionForeground"_s),
		$of(acceleratorSelectedForeground),
		$of("Menu.checkIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37)),
		$of("Menu.arrowIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38)),
		$of("MenuItem.border"_s),
		$of(menuItemBorder),
		$of("MenuItem.borderPainted"_s),
		$of($Boolean::TRUE),
		$of("MenuItem.font"_s),
		menuTextValue,
		$of("MenuItem.selectionForeground"_s),
		$of(menuSelectedForeground),
		$of("MenuItem.selectionBackground"_s),
		$of(menuSelectedBackground),
		$of("MenuItem.disabledForeground"_s),
		$of(menuDisabledForeground),
		$of("MenuItem.acceleratorFont"_s),
		subTextValue,
		$of("MenuItem.acceleratorForeground"_s),
		$of(acceleratorForeground),
		$of("MenuItem.acceleratorSelectionForeground"_s),
		$of(acceleratorSelectedForeground),
		$of("MenuItem.acceleratorDelimiter"_s),
		menuItemAcceleratorDelimiter,
		$of("MenuItem.checkIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37)),
		$of("MenuItem.arrowIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39)),
		$of("MenuItem.commandSound"_s),
		$of("sounds/MenuItemCommand.wav"_s),
		$of("OptionPane.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("close"_s)
		})),
		$of("OptionPane.informationSound"_s),
		$of("sounds/OptionPaneInformation.wav"_s),
		$of("OptionPane.warningSound"_s),
		$of("sounds/OptionPaneWarning.wav"_s),
		$of("OptionPane.errorSound"_s),
		$of("sounds/OptionPaneError.wav"_s),
		$of("OptionPane.questionSound"_s),
		$of("sounds/OptionPaneQuestion.wav"_s),
		$of("OptionPane.errorDialog.border.background"_s),
		$of($$new($ColorUIResource, 153, 51, 51)),
		$of("OptionPane.errorDialog.titlePane.foreground"_s),
		$of($$new($ColorUIResource, 51, 0, 0)),
		$of("OptionPane.errorDialog.titlePane.background"_s),
		$of($$new($ColorUIResource, 255, 153, 153)),
		$of("OptionPane.errorDialog.titlePane.shadow"_s),
		$of($$new($ColorUIResource, 204, 102, 102)),
		$of("OptionPane.questionDialog.border.background"_s),
		$of($$new($ColorUIResource, 51, 102, 51)),
		$of("OptionPane.questionDialog.titlePane.foreground"_s),
		$of($$new($ColorUIResource, 0, 51, 0)),
		$of("OptionPane.questionDialog.titlePane.background"_s),
		$of($$new($ColorUIResource, 153, 204, 153)),
		$of("OptionPane.questionDialog.titlePane.shadow"_s),
		$of($$new($ColorUIResource, 102, 153, 102)),
		$of("OptionPane.warningDialog.border.background"_s),
		$of($$new($ColorUIResource, 153, 102, 51)),
		$of("OptionPane.warningDialog.titlePane.foreground"_s),
		$of($$new($ColorUIResource, 102, 51, 0)),
		$of("OptionPane.warningDialog.titlePane.background"_s),
		$of($$new($ColorUIResource, 255, 204, 153)),
		$of("OptionPane.warningDialog.titlePane.shadow"_s),
		$of($$new($ColorUIResource, 204, 153, 102)),
		$of("Separator.background"_s),
		$($of(getSeparatorBackground())),
		$of("Separator.foreground"_s),
		$($of(getSeparatorForeground())),
		$of("PopupMenu.border"_s),
		$of(popupMenuBorder),
		$of("PopupMenu.popupSound"_s),
		$of("sounds/PopupMenuPopup.wav"_s),
		$of("PopupMenu.font"_s),
		menuTextValue,
		$of("CheckBoxMenuItem.border"_s),
		$of(menuItemBorder),
		$of("CheckBoxMenuItem.borderPainted"_s),
		$of($Boolean::TRUE),
		$of("CheckBoxMenuItem.font"_s),
		menuTextValue,
		$of("CheckBoxMenuItem.selectionForeground"_s),
		$of(menuSelectedForeground),
		$of("CheckBoxMenuItem.selectionBackground"_s),
		$of(menuSelectedBackground),
		$of("CheckBoxMenuItem.disabledForeground"_s),
		$of(menuDisabledForeground),
		$of("CheckBoxMenuItem.acceleratorFont"_s),
		subTextValue,
		$of("CheckBoxMenuItem.acceleratorForeground"_s),
		$of(acceleratorForeground),
		$of("CheckBoxMenuItem.acceleratorSelectionForeground"_s),
		$of(acceleratorSelectedForeground),
		$of("CheckBoxMenuItem.checkIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40)),
		$of("CheckBoxMenuItem.arrowIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39)),
		$of("CheckBoxMenuItem.commandSound"_s),
		$of("sounds/MenuItemCommand.wav"_s),
		$of("RadioButtonMenuItem.border"_s),
		$of(menuItemBorder),
		$of("RadioButtonMenuItem.borderPainted"_s),
		$of($Boolean::TRUE),
		$of("RadioButtonMenuItem.font"_s),
		menuTextValue,
		$of("RadioButtonMenuItem.selectionForeground"_s),
		$of(menuSelectedForeground),
		$of("RadioButtonMenuItem.selectionBackground"_s),
		$of(menuSelectedBackground),
		$of("RadioButtonMenuItem.disabledForeground"_s),
		$of(menuDisabledForeground),
		$of("RadioButtonMenuItem.acceleratorFont"_s),
		subTextValue,
		$of("RadioButtonMenuItem.acceleratorForeground"_s),
		$of(acceleratorForeground),
		$of("RadioButtonMenuItem.acceleratorSelectionForeground"_s),
		$of(acceleratorSelectedForeground),
		$of("RadioButtonMenuItem.checkIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41)),
		$of("RadioButtonMenuItem.arrowIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39)),
		$of("RadioButtonMenuItem.commandSound"_s),
		$of("sounds/MenuItemCommand.wav"_s),
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
		$of("Spinner.arrowButtonInsets"_s),
		$of(zeroInsets),
		$of("Spinner.border"_s),
		$of(textFieldBorder),
		$of("Spinner.arrowButtonBorder"_s),
		$of(buttonBorder),
		$of("Spinner.font"_s),
		controlTextValue,
		$of("SplitPane.dividerSize"_s),
		$($of($Integer::valueOf(10))),
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
		$of("SplitPane.centerOneTouchButtons"_s),
		$of($Boolean::FALSE),
		$of("SplitPane.dividerFocusColor"_s),
		$of(primaryControl),
		$of("Tree.font"_s),
		userTextValue,
		$of("Tree.textBackground"_s),
		$($of(getWindowBackground())),
		$of("Tree.selectionBorderColor"_s),
		$of(focusColor),
		$of("Tree.openIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15)),
		$of("Tree.closedIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15)),
		$of("Tree.leafIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16)),
		$of("Tree.expandedIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42)),
		$of("Tree.collapsedIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43)),
		$of("Tree.line"_s),
		$of(primaryControl),
		$of("Tree.hash"_s),
		$of(primaryControl),
		$of("Tree.rowHeight"_s),
		$of(zero),
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
		$of("ToolBar.border"_s),
		$of(toolBarBorder),
		$of("ToolBar.background"_s),
		$of(menuBackground),
		$of("ToolBar.foreground"_s),
		$($of(getMenuForeground())),
		$of("ToolBar.font"_s),
		menuTextValue,
		$of("ToolBar.dockingBackground"_s),
		$of(menuBackground),
		$of("ToolBar.floatingBackground"_s),
		$of(menuBackground),
		$of("ToolBar.dockingForeground"_s),
		$of(primaryControlDarkShadow),
		$of("ToolBar.floatingForeground"_s),
		$of(primaryControl),
		$of("ToolBar.rolloverBorder"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44)),
		$of("ToolBar.nonrolloverBorder"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45)),
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
		$of("RootPane.frameBorder"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46)),
		$of("RootPane.plainDialogBorder"_s),
		$of(dialogBorder),
		$of("RootPane.informationDialogBorder"_s),
		$of(dialogBorder),
		$of("RootPane.errorDialogBorder"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47)),
		$of("RootPane.colorChooserDialogBorder"_s),
		$of(questionDialogBorder),
		$of("RootPane.fileChooserDialogBorder"_s),
		$of(questionDialogBorder),
		$of("RootPane.questionDialogBorder"_s),
		$of(questionDialogBorder),
		$of("RootPane.warningDialogBorder"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48)),
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
		}))
	}));
	table->putDefaults(defaults);
	bool var$1 = isWindows();
	bool var$0 = var$1 && useSystemFonts();
	if (var$0 && $nc(theme)->isSystemTheme()) {
		$var($Object, messageFont, $new($MetalFontDesktopProperty, "win.messagebox.font.height"_s, $MetalTheme::CONTROL_TEXT_FONT));
		$assign(defaults, $new($ObjectArray, {
			$of("OptionPane.messageFont"_s),
			messageFont,
			$of("OptionPane.buttonFont"_s),
			messageFont
		}));
		table->putDefaults(defaults);
	}
	flushUnreferenced();
	bool lafCond = $SwingUtilities2::isLocalDisplay();
	$SwingUtilities2::putAATextInfo(lafCond, table);
	$new($MetalLookAndFeel$AATextListener, this);
}

void MetalLookAndFeel::createDefaultTheme() {
	getCurrentTheme();
}

$UIDefaults* MetalLookAndFeel::getDefaults() {
	$useLocalCurrentObjectStackCache();
	MetalLookAndFeel::METAL_LOOK_AND_FEEL_INITED = true;
	createDefaultTheme();
	$var($UIDefaults, table, $BasicLookAndFeel::getDefaults());
	$var($MetalTheme, currentTheme, getCurrentTheme());
	$nc(currentTheme)->addCustomEntriesToTable(table);
	currentTheme->install();
	return table;
}

void MetalLookAndFeel::provideErrorFeedback($Component* component) {
	$BasicLookAndFeel::provideErrorFeedback(component);
}

void MetalLookAndFeel::setCurrentTheme($MetalTheme* theme) {
	$init(MetalLookAndFeel);
	if (theme == nullptr) {
		$throwNew($NullPointerException, "Can\'t have null theme"_s);
	}
	$nc($($AppContext::getAppContext()))->put("currentMetalTheme"_s, theme);
}

$MetalTheme* MetalLookAndFeel::getCurrentTheme() {
	$init(MetalLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MetalTheme, currentTheme, nullptr);
	$var($AppContext, context, $AppContext::getAppContext());
	$assign(currentTheme, $cast($MetalTheme, $nc(context)->get("currentMetalTheme"_s)));
	if (currentTheme == nullptr) {
		if (useHighContrastTheme()) {
			$assign(currentTheme, $new($MetalHighContrastTheme));
		} else {
			$var($String, theme, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.metalTheme"_s)))));
			if ("steel"_s->equals(theme)) {
				$assign(currentTheme, $new($DefaultMetalTheme));
			} else {
				$assign(currentTheme, $new($OceanTheme));
			}
		}
		setCurrentTheme(currentTheme);
	}
	return currentTheme;
}

$Icon* MetalLookAndFeel::getDisabledIcon($JComponent* component, $Icon* icon) {
	if (($instanceOf($ImageIcon, icon)) && MetalLookAndFeel::usingOcean()) {
		return $MetalUtils::getOceanDisabledButtonIcon($($nc(($cast($ImageIcon, icon)))->getImage()));
	}
	return $BasicLookAndFeel::getDisabledIcon(component, icon);
}

$Icon* MetalLookAndFeel::getDisabledSelectedIcon($JComponent* component, $Icon* icon) {
	if (($instanceOf($ImageIcon, icon)) && MetalLookAndFeel::usingOcean()) {
		return $MetalUtils::getOceanDisabledButtonIcon($($nc(($cast($ImageIcon, icon)))->getImage()));
	}
	return $BasicLookAndFeel::getDisabledSelectedIcon(component, icon);
}

$FontUIResource* MetalLookAndFeel::getControlTextFont() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getControlTextFont();
}

$FontUIResource* MetalLookAndFeel::getSystemTextFont() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getSystemTextFont();
}

$FontUIResource* MetalLookAndFeel::getUserTextFont() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getUserTextFont();
}

$FontUIResource* MetalLookAndFeel::getMenuTextFont() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getMenuTextFont();
}

$FontUIResource* MetalLookAndFeel::getWindowTitleFont() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getWindowTitleFont();
}

$FontUIResource* MetalLookAndFeel::getSubTextFont() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getSubTextFont();
}

$ColorUIResource* MetalLookAndFeel::getDesktopColor() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getDesktopColor();
}

$ColorUIResource* MetalLookAndFeel::getFocusColor() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getFocusColor();
}

$ColorUIResource* MetalLookAndFeel::getWhite() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getWhite();
}

$ColorUIResource* MetalLookAndFeel::getBlack() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getBlack();
}

$ColorUIResource* MetalLookAndFeel::getControl() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getControl();
}

$ColorUIResource* MetalLookAndFeel::getControlShadow() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getControlShadow();
}

$ColorUIResource* MetalLookAndFeel::getControlDarkShadow() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getControlDarkShadow();
}

$ColorUIResource* MetalLookAndFeel::getControlInfo() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getControlInfo();
}

$ColorUIResource* MetalLookAndFeel::getControlHighlight() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getControlHighlight();
}

$ColorUIResource* MetalLookAndFeel::getControlDisabled() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getControlDisabled();
}

$ColorUIResource* MetalLookAndFeel::getPrimaryControl() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getPrimaryControl();
}

$ColorUIResource* MetalLookAndFeel::getPrimaryControlShadow() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getPrimaryControlShadow();
}

$ColorUIResource* MetalLookAndFeel::getPrimaryControlDarkShadow() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getPrimaryControlDarkShadow();
}

$ColorUIResource* MetalLookAndFeel::getPrimaryControlInfo() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getPrimaryControlInfo();
}

$ColorUIResource* MetalLookAndFeel::getPrimaryControlHighlight() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getPrimaryControlHighlight();
}

$ColorUIResource* MetalLookAndFeel::getSystemTextColor() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getSystemTextColor();
}

$ColorUIResource* MetalLookAndFeel::getControlTextColor() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getControlTextColor();
}

$ColorUIResource* MetalLookAndFeel::getInactiveControlTextColor() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getInactiveControlTextColor();
}

$ColorUIResource* MetalLookAndFeel::getInactiveSystemTextColor() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getInactiveSystemTextColor();
}

$ColorUIResource* MetalLookAndFeel::getUserTextColor() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getUserTextColor();
}

$ColorUIResource* MetalLookAndFeel::getTextHighlightColor() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getTextHighlightColor();
}

$ColorUIResource* MetalLookAndFeel::getHighlightedTextColor() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getHighlightedTextColor();
}

$ColorUIResource* MetalLookAndFeel::getWindowBackground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getWindowBackground();
}

$ColorUIResource* MetalLookAndFeel::getWindowTitleBackground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getWindowTitleBackground();
}

$ColorUIResource* MetalLookAndFeel::getWindowTitleForeground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getWindowTitleForeground();
}

$ColorUIResource* MetalLookAndFeel::getWindowTitleInactiveBackground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getWindowTitleInactiveBackground();
}

$ColorUIResource* MetalLookAndFeel::getWindowTitleInactiveForeground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getWindowTitleInactiveForeground();
}

$ColorUIResource* MetalLookAndFeel::getMenuBackground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getMenuBackground();
}

$ColorUIResource* MetalLookAndFeel::getMenuForeground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getMenuForeground();
}

$ColorUIResource* MetalLookAndFeel::getMenuSelectedBackground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getMenuSelectedBackground();
}

$ColorUIResource* MetalLookAndFeel::getMenuSelectedForeground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getMenuSelectedForeground();
}

$ColorUIResource* MetalLookAndFeel::getMenuDisabledForeground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getMenuDisabledForeground();
}

$ColorUIResource* MetalLookAndFeel::getSeparatorBackground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getSeparatorBackground();
}

$ColorUIResource* MetalLookAndFeel::getSeparatorForeground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getSeparatorForeground();
}

$ColorUIResource* MetalLookAndFeel::getAcceleratorForeground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getAcceleratorForeground();
}

$ColorUIResource* MetalLookAndFeel::getAcceleratorSelectedForeground() {
	$init(MetalLookAndFeel);
	return $nc($(getCurrentTheme()))->getAcceleratorSelectedForeground();
}

$LayoutStyle* MetalLookAndFeel::getLayoutStyle() {
	$init($MetalLookAndFeel$MetalLayoutStyle);
	return $MetalLookAndFeel$MetalLayoutStyle::INSTANCE;
}

void MetalLookAndFeel::flushUnreferenced() {
	$init(MetalLookAndFeel);
	$var($MetalLookAndFeel$AATextListener, aatl, nullptr);
	while (($assign(aatl, $cast($MetalLookAndFeel$AATextListener, $nc(MetalLookAndFeel::queue)->poll()))) != nullptr) {
		$nc(aatl)->dispose();
	}
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$57($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$WarningDialogBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$56($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$ErrorDialogBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$55($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$FrameBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$54($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalBorders::getToolBarNonrolloverBorder());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$53($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalBorders::getToolBarRolloverBorder());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$52($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getTreeControlIcon($nc($($Boolean::valueOf($MetalIconFactory::LIGHT)))->booleanValue()));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$51($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getTreeControlIcon($nc($($Boolean::valueOf($MetalIconFactory::DARK)))->booleanValue()));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$46($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getRadioButtonMenuItemIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$44($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getCheckBoxMenuItemIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$43($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getMenuItemArrowIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$41($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getMenuArrowIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$40($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getMenuItemCheckIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$39($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$TableHeaderBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$38(int32_t internalFrameIconSize, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getInternalFrameAltMaximizeIcon(internalFrameIconSize));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$37(int32_t internalFrameIconSize, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getInternalFrameMinimizeIcon(internalFrameIconSize));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$36(int32_t internalFrameIconSize, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getInternalFrameMaximizeIcon(internalFrameIconSize));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$35(int32_t internalFrameIconSize, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getInternalFrameCloseIcon(internalFrameIconSize));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$34($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalIconFactory$PaletteCloseIcon));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$33($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$PaletteBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$32($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$OptionDialogBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$31($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$InternalFrameBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$30($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getInternalFrameDefaultMenuIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$29($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getVerticalSliderThumbIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$28($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getHorizontalSliderThumbIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$27($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getFileChooserUpFolderIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$26($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getFileChooserNewFolderIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$25($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getFileChooserListViewIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$24($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getFileChooserHomeFolderIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$23($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getFileChooserDetailViewIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$22($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getTreeFloppyDriveIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$21($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getTreeHardDriveIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$20($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getTreeComputerIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$19($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getTreeLeafIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$18($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getTreeFolderIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$17($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getRadioButtonIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$16($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalIconFactory::getCheckBoxIcon());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$12($Color* controlDarkShadow, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($BorderUIResource$LineBorderUIResource, controlDarkShadow, 1));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$11($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$ToolBarBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$10($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$MenuItemBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$9($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$PopupMenuBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$8($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$MenuBarBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$7($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalBorders::getDesktopIconBorder());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$6($Color* controlShadow, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($BorderUIResource$LineBorderUIResource, controlShadow));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$5($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalBorders::getToggleButtonBorder());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$4($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalBorders::getButtonBorder());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$3($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$ScrollPaneBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$2($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$QuestionDialogBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$1($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$DialogBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$0($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($MetalBorders::getTextFieldBorder());
}

void clinit$MetalLookAndFeel($Class* class$) {
	MetalLookAndFeel::METAL_LOOK_AND_FEEL_INITED = false;
	$assignStatic(MetalLookAndFeel::queue, $new($ReferenceQueue));
}

MetalLookAndFeel::MetalLookAndFeel() {
}

$Class* MetalLookAndFeel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47::load$(name, initialize);
		}
		if (name->equals(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48::classInfo$.name)) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48::load$(name, initialize);
		}
	}
	$loadClass(MetalLookAndFeel, name, initialize, &_MetalLookAndFeel_ClassInfo_, clinit$MetalLookAndFeel, allocate$MetalLookAndFeel);
	return class$;
}

$Class* MetalLookAndFeel::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax