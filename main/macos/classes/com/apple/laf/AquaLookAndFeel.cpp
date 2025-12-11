#include <com/apple/laf/AquaLookAndFeel.h>

#include <apple/laf/JRSUIUtils$TabbedPane.h>
#include <apple/laf/JRSUIUtils.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonCheckBoxUI.h>
#include <com/apple/laf/AquaButtonRadioUI.h>
#include <com/apple/laf/AquaFonts.h>
#include <com/apple/laf/AquaGroupBorder.h>
#include <com/apple/laf/AquaIcon$SystemIcon.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaInternalFrameUI.h>
#include <com/apple/laf/AquaKeyBindings$LateBoundInputMap.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <com/apple/laf/AquaListUI.h>
#include <com/apple/laf/AquaLookAndFeel$1.h>
#include <com/apple/laf/AquaLookAndFeel$2.h>
#include <com/apple/laf/AquaLookAndFeel$3.h>
#include <com/apple/laf/AquaMenuBarBorder.h>
#include <com/apple/laf/AquaMenuBorder.h>
#include <com/apple/laf/AquaMenuPainter.h>
#include <com/apple/laf/AquaMnemonicHandler.h>
#include <com/apple/laf/AquaScrollRegionBorder.h>
#include <com/apple/laf/AquaSplitPaneDividerUI.h>
#include <com/apple/laf/AquaTableHeaderBorder.h>
#include <com/apple/laf/AquaTextFieldBorder.h>
#include <com/apple/laf/AquaToolBarUI.h>
#include <com/apple/laf/ScreenPopupFactory.h>
#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/KeyEventPostProcessor.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/ResourceBundle.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/Icon.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/BorderUIResource$EmptyBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/DimensionUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef FALSE
#undef GRAY
#undef PKG_PREFIX
#undef TRAILING
#undef TRUE

using $JRSUIUtils = ::apple::laf::JRSUIUtils;
using $JRSUIUtils$TabbedPane = ::apple::laf::JRSUIUtils$TabbedPane;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonCheckBoxUI = ::com::apple::laf::AquaButtonCheckBoxUI;
using $AquaButtonRadioUI = ::com::apple::laf::AquaButtonRadioUI;
using $AquaFonts = ::com::apple::laf::AquaFonts;
using $AquaGroupBorder = ::com::apple::laf::AquaGroupBorder;
using $AquaIcon$SystemIcon = ::com::apple::laf::AquaIcon$SystemIcon;
using $AquaImageFactory = ::com::apple::laf::AquaImageFactory;
using $AquaInternalFrameUI = ::com::apple::laf::AquaInternalFrameUI;
using $AquaKeyBindings = ::com::apple::laf::AquaKeyBindings;
using $AquaListUI = ::com::apple::laf::AquaListUI;
using $AquaLookAndFeel$1 = ::com::apple::laf::AquaLookAndFeel$1;
using $AquaLookAndFeel$2 = ::com::apple::laf::AquaLookAndFeel$2;
using $AquaLookAndFeel$3 = ::com::apple::laf::AquaLookAndFeel$3;
using $AquaMenuBarBorder = ::com::apple::laf::AquaMenuBarBorder;
using $AquaMenuBorder = ::com::apple::laf::AquaMenuBorder;
using $AquaMenuPainter = ::com::apple::laf::AquaMenuPainter;
using $AquaMnemonicHandler = ::com::apple::laf::AquaMnemonicHandler;
using $AquaScrollRegionBorder = ::com::apple::laf::AquaScrollRegionBorder;
using $AquaSplitPaneDividerUI = ::com::apple::laf::AquaSplitPaneDividerUI;
using $AquaTableHeaderBorder = ::com::apple::laf::AquaTableHeaderBorder;
using $AquaTextFieldBorder = ::com::apple::laf::AquaTextFieldBorder;
using $AquaToolBarUI = ::com::apple::laf::AquaToolBarUI;
using $ScreenPopupFactory = ::com::apple::laf::ScreenPopupFactory;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ActionMap = ::javax::swing::ActionMap;
using $BorderFactory = ::javax::swing::BorderFactory;
using $PopupFactory = ::javax::swing::PopupFactory;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $BorderUIResource$EmptyBorderUIResource = ::javax::swing::plaf::BorderUIResource$EmptyBorderUIResource;
using $BorderUIResource$LineBorderUIResource = ::javax::swing::plaf::BorderUIResource$LineBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $DimensionUIResource = ::javax::swing::plaf::DimensionUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicBorders = ::javax::swing::plaf::basic::BasicBorders;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$UIDefaultsAccessor = ::sun::swing::SwingAccessor$UIDefaultsAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$0(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$1(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$2(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$3(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$4(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$5(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$6(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$7(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$8(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$9(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$10(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$11(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$12(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$13(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$14(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$15(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$16(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$17(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$18(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$19(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$20(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$21(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$23(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$24(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$25(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$26(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$27(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$28(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$29(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$30(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$31(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$32(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$35(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$37(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$38(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$39(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$40(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$41(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$42(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$43(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::*)()>(&AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::class$ = nullptr;

$FieldInfo _AquaLookAndFeel_FieldInfo_[] = {
	{"sPropertyPrefix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaLookAndFeel, sPropertyPrefix)},
	{"PKG_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaLookAndFeel, PKG_PREFIX)},
	{}
};

$MethodInfo _AquaLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLookAndFeel::*)()>(&AquaLookAndFeel::init$))},
	{"getAudioActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED},
	{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSupportsWindowDecorations", "()Z", nullptr, $PUBLIC},
	{"initClassDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initResourceBundle", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(static_cast<void(AquaLookAndFeel::*)($UIDefaults*)>(&AquaLookAndFeel::initResourceBundle))},
	{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initialize", "()V", nullptr, $PUBLIC},
	{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"lambda$initComponentDefaults$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$0))},
	{"lambda$initComponentDefaults$1", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$1))},
	{"lambda$initComponentDefaults$10", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$10))},
	{"lambda$initComponentDefaults$11", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$11))},
	{"lambda$initComponentDefaults$12", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$12))},
	{"lambda$initComponentDefaults$13", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$13))},
	{"lambda$initComponentDefaults$14", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$14))},
	{"lambda$initComponentDefaults$15", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$15))},
	{"lambda$initComponentDefaults$16", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$16))},
	{"lambda$initComponentDefaults$17", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$17))},
	{"lambda$initComponentDefaults$18", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$18))},
	{"lambda$initComponentDefaults$19", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$19))},
	{"lambda$initComponentDefaults$2", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$2))},
	{"lambda$initComponentDefaults$20", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$20))},
	{"lambda$initComponentDefaults$21", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$21))},
	{"lambda$initComponentDefaults$23", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$23))},
	{"lambda$initComponentDefaults$24", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$24))},
	{"lambda$initComponentDefaults$25", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$25))},
	{"lambda$initComponentDefaults$26", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$26))},
	{"lambda$initComponentDefaults$27", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$27))},
	{"lambda$initComponentDefaults$28", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$28))},
	{"lambda$initComponentDefaults$29", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$29))},
	{"lambda$initComponentDefaults$3", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$3))},
	{"lambda$initComponentDefaults$30", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$30))},
	{"lambda$initComponentDefaults$31", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$31))},
	{"lambda$initComponentDefaults$32", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$32))},
	{"lambda$initComponentDefaults$35", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$35))},
	{"lambda$initComponentDefaults$37", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$37))},
	{"lambda$initComponentDefaults$38", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$38))},
	{"lambda$initComponentDefaults$39", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$39))},
	{"lambda$initComponentDefaults$4", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$4))},
	{"lambda$initComponentDefaults$40", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$40))},
	{"lambda$initComponentDefaults$41", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$41))},
	{"lambda$initComponentDefaults$42", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$42))},
	{"lambda$initComponentDefaults$43", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$43))},
	{"lambda$initComponentDefaults$5", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$5))},
	{"lambda$initComponentDefaults$6", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$6))},
	{"lambda$initComponentDefaults$7", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$7))},
	{"lambda$initComponentDefaults$8", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$8))},
	{"lambda$initComponentDefaults$9", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&AquaLookAndFeel::lambda$initComponentDefaults$9))},
	{"uninitialize", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaLookAndFeel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaLookAndFeel$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaLookAndFeel$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaLookAndFeel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaLookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaLookAndFeel",
	"javax.swing.plaf.basic.BasicLookAndFeel",
	nullptr,
	_AquaLookAndFeel_FieldInfo_,
	_AquaLookAndFeel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaLookAndFeel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaLookAndFeel$3,com.apple.laf.AquaLookAndFeel$2,com.apple.laf.AquaLookAndFeel$1"
};

$Object* allocate$AquaLookAndFeel($Class* clazz) {
	return $of($alloc(AquaLookAndFeel));
}

$String* AquaLookAndFeel::sPropertyPrefix = nullptr;
$String* AquaLookAndFeel::PKG_PREFIX = nullptr;

void AquaLookAndFeel::init$() {
	$BasicLookAndFeel::init$();
}

$String* AquaLookAndFeel::getName() {
	return "Mac OS X"_s;
}

$String* AquaLookAndFeel::getID() {
	return "Aqua"_s;
}

$String* AquaLookAndFeel::getDescription() {
	return "Aqua Look and Feel for Mac OS X"_s;
}

bool AquaLookAndFeel::getSupportsWindowDecorations() {
	return false;
}

bool AquaLookAndFeel::isNativeLookAndFeel() {
	return true;
}

bool AquaLookAndFeel::isSupportedLookAndFeel() {
	return true;
}

void AquaLookAndFeel::initialize() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AquaLookAndFeel$1, this)));
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AquaLookAndFeel$2, this)));
	$BasicLookAndFeel::initialize();
	$var($ScreenPopupFactory, spf, $new($ScreenPopupFactory));
	spf->setActive(true);
	$PopupFactory::setSharedInstance(spf);
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->addKeyEventPostProcessor($($AquaMnemonicHandler::getInstance()));
}

void AquaLookAndFeel::uninitialize() {
	$useLocalCurrentObjectStackCache();
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->removeKeyEventPostProcessor($($AquaMnemonicHandler::getInstance()));
	$var($PopupFactory, popupFactory, $PopupFactory::getSharedInstance());
	if (popupFactory != nullptr && $instanceOf($ScreenPopupFactory, popupFactory)) {
		$nc(($cast($ScreenPopupFactory, popupFactory)))->setActive(false);
	}
	$BasicLookAndFeel::uninitialize();
}

$ActionMap* AquaLookAndFeel::getAudioActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, audioActionMap, $cast($ActionMap, $UIManager::get("AuditoryCues.actionMap"_s)));
	if (audioActionMap != nullptr) {
		return audioActionMap;
	}
	$var($ObjectArray, acList, $cast($ObjectArray, $UIManager::get("AuditoryCues.cueList"_s)));
	if (acList != nullptr) {
		$assign(audioActionMap, $new($ActionMapUIResource));
		for (int32_t counter = acList->length - 1; counter >= 0; --counter) {
			audioActionMap->put(acList->get(counter), $(createAudioAction(acList->get(counter))));
		}
	}
	$nc($($UIManager::getLookAndFeelDefaults()))->put("AuditoryCues.actionMap"_s, audioActionMap);
	return audioActionMap;
}

$UIDefaults* AquaLookAndFeel::getDefaults() {
	$var($UIDefaults, table, $new($UIDefaults));
	try {
		initClassDefaults(table);
		$BasicLookAndFeel::initSystemColorDefaults(table);
		$BasicLookAndFeel::initComponentDefaults(table);
		initSystemColorDefaults(table);
		initComponentDefaults(table);
	} catch ($Exception& e) {
		e->printStackTrace();
	}
	return table;
}

void AquaLookAndFeel::initResourceBundle($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc(table)->setDefaultLocale($($Locale::getDefault()));
	$nc($($SwingAccessor::getUIDefaultsAccessor()))->addInternalBundle(table, $$str({AquaLookAndFeel::PKG_PREFIX, "resources.aqua"_s}));
	try {
		$var($ResourceBundle, aquaProperties, $ResourceBundle::getBundle($$str({AquaLookAndFeel::PKG_PREFIX, "resources.aqua"_s})));
		$var($Enumeration, propertyKeys, $nc(aquaProperties)->getKeys());
		while ($nc(propertyKeys)->hasMoreElements()) {
			$var($String, key, $cast($String, propertyKeys->nextElement()));
			table->put(key, $(aquaProperties->getString(key)));
		}
	} catch ($Exception& e) {
	}
}

void AquaLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	initResourceBundle(table);
	$var($InsetsUIResource, zeroInsets, $new($InsetsUIResource, 0, 0, 0, 0));
	$var($InsetsUIResource, menuItemMargin, zeroInsets);
	$init($Boolean);
	$var($Boolean, useOpaqueComponents, $Boolean::TRUE);
	$var($Boolean, buttonShouldBeOpaque, $Boolean::FALSE);
	$var($Object, listCellRendererActiveValue, $new($AquaLookAndFeel$3, this));
	$var($Border, toolTipBorder, $new($BorderUIResource$EmptyBorderUIResource, 2, 0, 2, 0));
	$var($ColorUIResource, toolTipBackground, $new($ColorUIResource, 255, 255, $cast(int32_t, (255.0 * 0.8))));
	$init($Color);
	$var($ColorUIResource, black, $new($ColorUIResource, $Color::black));
	$var($ColorUIResource, white, $new($ColorUIResource, $Color::white));
	$var($ColorUIResource, smokyGlass, $new($ColorUIResource, $$new($Color, 0, 0, 0, 152)));
	$var($ColorUIResource, dockIconRim, $new($ColorUIResource, $$new($Color, 192, 192, 192, 192)));
	$var($ColorUIResource, mediumTranslucentBlack, $new($ColorUIResource, $$new($Color, 0, 0, 0, 100)));
	$var($ColorUIResource, translucentWhite, $new($ColorUIResource, $$new($Color, 255, 255, 255, 254)));
	$var($ColorUIResource, disabled, $new($ColorUIResource, 0.5f, 0.5f, 0.5f));
	$var($ColorUIResource, disabledShadow, $new($ColorUIResource, 0.25f, 0.25f, 0.25f));
	$var($ColorUIResource, selected, $new($ColorUIResource, 1.0f, 0.4f, 0.4f));
	$var($ColorUIResource, selectedTabTitlePressedColor, $new($ColorUIResource, 240, 240, 240));
	$var($ColorUIResource, selectedTabTitleDisabledColor, $new($ColorUIResource, $$new($Color, (float)1, (float)1, (float)1, 0.55f)));
	$var($ColorUIResource, selectedTabTitleNormalColor, white);
	$var($Color, selectedControlTextColor, $AquaImageFactory::getSelectedControlColorUIResource());
	$var($ColorUIResource, selectedTabTitleShadowDisabledColor, $new($ColorUIResource, $$new($Color, (float)0, (float)0, (float)0, 0.25f)));
	$var($ColorUIResource, selectedTabTitleShadowNormalColor, mediumTranslucentBlack);
	$var($ColorUIResource, nonSelectedTabTitleNormalColor, black);
	$var($ColorUIResource, toolbarDragHandleColor, $new($ColorUIResource, 140, 140, 140));
	$var($UIDefaults$LazyValue, marginBorder, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0)));
	int32_t zero = 0;
	$var($Object, editorMargin, zeroInsets);
	int32_t textCaretBlinkRate = 500;
	$var($UIDefaults$LazyValue, textFieldBorder, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1)));
	$var($Object, textAreaBorder, marginBorder);
	$var($UIDefaults$LazyValue, scollListBorder, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2)));
	$var($UIDefaults$LazyValue, aquaTitledBorder, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3)));
	$var($UIDefaults$LazyValue, aquaInsetBorder, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4)));
	$var($Border, listHeaderBorder, $AquaTableHeaderBorder::getListHeaderBorder());
	$var($Border, zeroBorder, $new($BorderUIResource$EmptyBorderUIResource, 0, 0, 0, 0));
	$var($Color, selectionBackground, $AquaImageFactory::getSelectionBackgroundColorUIResource());
	$var($Color, selectionForeground, $AquaImageFactory::getSelectionForegroundColorUIResource());
	$var($Color, selectionInactiveBackground, $AquaImageFactory::getSelectionInactiveBackgroundColorUIResource());
	$var($Color, selectionInactiveForeground, $AquaImageFactory::getSelectionInactiveForegroundColorUIResource());
	$var($Color, textHighlightText, $AquaImageFactory::getTextSelectionForegroundColorUIResource());
	$var($Color, textHighlight, $AquaImageFactory::getTextSelectionBackgroundColorUIResource());
	$var($Color, textHighlightInactive, $new($ColorUIResource, 212, 212, 212));
	$var($Color, textInactiveText, disabled);
	$var($Color, textForeground, black);
	$var($Color, textBackground, white);
	$var($Color, textInactiveBackground, white);
	$var($Color, textPasswordFieldCapsLockIconColor, mediumTranslucentBlack);
	$var($UIDefaults$LazyValue, internalFrameBorder, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5)));
	$var($Color, desktopBackgroundColor, $new($ColorUIResource, $$new($Color, 65, 105, 170)));
	$var($Color, focusRingColor, $AquaImageFactory::getFocusRingColorUIResource());
	$var($Border, focusCellHighlightBorder, $new($BorderUIResource$LineBorderUIResource, focusRingColor));
	$var($Color, windowBackgroundColor, $AquaImageFactory::getWindowBackgroundColorUIResource());
	$var($Color, panelBackgroundColor, windowBackgroundColor);
	$var($Color, tabBackgroundColor, windowBackgroundColor);
	$var($Color, controlBackgroundColor, windowBackgroundColor);
	$var($UIDefaults$LazyValue, controlFont, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6)));
	$var($UIDefaults$LazyValue, controlSmallFont, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7)));
	$var($UIDefaults$LazyValue, alertHeaderFont, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8)));
	$var($UIDefaults$LazyValue, menuFont, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9)));
	$var($UIDefaults$LazyValue, viewFont, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10)));
	$var($Color, menuBackgroundColor, $new($ColorUIResource, $Color::white));
	$var($Color, menuForegroundColor, black);
	$var($Color, menuSelectedForegroundColor, white);
	$var($Color, menuSelectedBackgroundColor, focusRingColor);
	$var($Color, menuDisabledBackgroundColor, menuBackgroundColor);
	$var($Color, menuDisabledForegroundColor, disabled);
	$var($Color, menuAccelForegroundColor, black);
	$var($Color, menuAccelSelectionForegroundColor, black);
	$var($Border, menuBorder, $new($AquaMenuBorder));
	$var($UIDefaults$LazyInputMap, controlFocusInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("SPACE"_s),
		$of("pressed"_s),
		$of("released SPACE"_s),
		$of("released"_s)
	})));
	$var($UIDefaults$LazyValue, confirmIcon, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11)));
	$var($UIDefaults$LazyValue, cautionIcon, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12)));
	$var($UIDefaults$LazyValue, stopIcon, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13)));
	$var($UIDefaults$LazyValue, securityIcon, static_cast<$UIDefaults$LazyValue*>($new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14)));
	$var($AquaKeyBindings, aquaKeyBindings, $AquaKeyBindings::instance());
	$var($ObjectArray, defaults, $new($ObjectArray, {
		$of("control"_s),
		$of(windowBackgroundColor),
		$of("Button.background"_s),
		$of(controlBackgroundColor),
		$of("Button.foreground"_s),
		$of(black),
		$of("Button.disabledText"_s),
		$of(disabled),
		$of("Button.select"_s),
		$of(selected),
		$of("Button.border"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15)),
		$of("Button.font"_s),
		$of(controlFont),
		$of("Button.textIconGap"_s),
		$($of($Integer::valueOf(4))),
		$of("Button.textShiftOffset"_s),
		$($of($Integer::valueOf(zero))),
		$of("Button.focusInputMap"_s),
		$of(controlFocusInputMap),
		$of("Button.margin"_s),
		$of($$new($InsetsUIResource, 0, 2, 0, 2)),
		$of("Button.opaque"_s),
		$of(buttonShouldBeOpaque),
		$of("CheckBox.background"_s),
		$of(controlBackgroundColor),
		$of("CheckBox.foreground"_s),
		$of(black),
		$of("CheckBox.disabledText"_s),
		$of(disabled),
		$of("CheckBox.select"_s),
		$of(selected),
		$of("CheckBox.icon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16)),
		$of("CheckBox.font"_s),
		$of(controlFont),
		$of("CheckBox.border"_s),
		$($of($AquaButtonBorder::getBevelButtonBorder())),
		$of("CheckBox.margin"_s),
		$of($$new($InsetsUIResource, 1, 1, 0, 1)),
		$of("CheckBox.focusInputMap"_s),
		$of(controlFocusInputMap),
		$of("CheckBoxMenuItem.font"_s),
		$of(menuFont),
		$of("CheckBoxMenuItem.acceleratorFont"_s),
		$of(menuFont),
		$of("CheckBoxMenuItem.background"_s),
		$of(menuBackgroundColor),
		$of("CheckBoxMenuItem.foreground"_s),
		$of(menuForegroundColor),
		$of("CheckBoxMenuItem.selectionBackground"_s),
		$of(menuSelectedBackgroundColor),
		$of("CheckBoxMenuItem.selectionForeground"_s),
		$of(menuSelectedForegroundColor),
		$of("CheckBoxMenuItem.disabledBackground"_s),
		$of(menuDisabledBackgroundColor),
		$of("CheckBoxMenuItem.disabledForeground"_s),
		$of(menuDisabledForegroundColor),
		$of("CheckBoxMenuItem.acceleratorForeground"_s),
		$of(menuAccelForegroundColor),
		$of("CheckBoxMenuItem.acceleratorSelectionForeground"_s),
		$of(menuAccelSelectionForegroundColor),
		$of("CheckBoxMenuItem.acceleratorDelimiter"_s),
		$of(""_s),
		$of("CheckBoxMenuItem.border"_s),
		$of(menuBorder),
		$of("CheckBoxMenuItem.margin"_s),
		$of(menuItemMargin),
		$of("CheckBoxMenuItem.borderPainted"_s),
		$of($Boolean::TRUE),
		$of("CheckBoxMenuItem.checkIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17)),
		$of("CheckBoxMenuItem.dashIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18)),
		$of("ColorChooser.background"_s),
		$of(panelBackgroundColor),
		$of("ComboBox.font"_s),
		$of(controlFont),
		$of("ComboBox.background"_s),
		$of(controlBackgroundColor),
		$of("ComboBox.foreground"_s),
		$of(menuForegroundColor),
		$of("ComboBox.selectionBackground"_s),
		$of(menuSelectedBackgroundColor),
		$of("ComboBox.selectionForeground"_s),
		$of(menuSelectedForegroundColor),
		$of("ComboBox.disabledBackground"_s),
		$of(menuDisabledBackgroundColor),
		$of("ComboBox.disabledForeground"_s),
		$of(menuDisabledForegroundColor),
		$of("ComboBox.ancestorInputMap"_s),
		$($of($nc(aquaKeyBindings)->getComboBoxInputMap())),
		$of("DesktopIcon.border"_s),
		$of(internalFrameBorder),
		$of("DesktopIcon.borderColor"_s),
		$of(smokyGlass),
		$of("DesktopIcon.borderRimColor"_s),
		$of(dockIconRim),
		$of("DesktopIcon.labelBackground"_s),
		$of(mediumTranslucentBlack),
		$of("Desktop.background"_s),
		$of(desktopBackgroundColor),
		$of("EditorPane.focusInputMap"_s),
		$($of(aquaKeyBindings->getMultiLineTextInputMap())),
		$of("EditorPane.font"_s),
		$of(controlFont),
		$of("EditorPane.background"_s),
		$of(textBackground),
		$of("EditorPane.foreground"_s),
		$of(textForeground),
		$of("EditorPane.selectionBackground"_s),
		$of(textHighlight),
		$of("EditorPane.selectionForeground"_s),
		$of(textHighlightText),
		$of("EditorPane.caretForeground"_s),
		$of(textForeground),
		$of("EditorPane.caretBlinkRate"_s),
		$($of($Integer::valueOf(textCaretBlinkRate))),
		$of("EditorPane.inactiveForeground"_s),
		$of(textInactiveText),
		$of("EditorPane.inactiveBackground"_s),
		$of(textInactiveBackground),
		$of("EditorPane.border"_s),
		textAreaBorder,
		$of("EditorPane.margin"_s),
		editorMargin,
		$of("FileChooser.newFolderIcon"_s),
		$($of($AquaIcon$SystemIcon::getFolderIconUIResource())),
		$of("FileChooser.upFolderIcon"_s),
		$($of($AquaIcon$SystemIcon::getFolderIconUIResource())),
		$of("FileChooser.homeFolderIcon"_s),
		$($of($AquaIcon$SystemIcon::getDesktopIconUIResource())),
		$of("FileChooser.detailsViewIcon"_s),
		$($of($AquaIcon$SystemIcon::getComputerIconUIResource())),
		$of("FileChooser.listViewIcon"_s),
		$($of($AquaIcon$SystemIcon::getComputerIconUIResource())),
		$of("FileView.directoryIcon"_s),
		$($of($AquaIcon$SystemIcon::getFolderIconUIResource())),
		$of("FileView.fileIcon"_s),
		$($of($AquaIcon$SystemIcon::getDocumentIconUIResource())),
		$of("FileView.computerIcon"_s),
		$($of($AquaIcon$SystemIcon::getDesktopIconUIResource())),
		$of("FileView.hardDriveIcon"_s),
		$($of($AquaIcon$SystemIcon::getHardDriveIconUIResource())),
		$of("FileView.floppyDriveIcon"_s),
		$($of($AquaIcon$SystemIcon::getFloppyIconUIResource())),
		$of("FileChooser.cancelButtonMnemonic"_s),
		$($of($Integer::valueOf(zero))),
		$of("FileChooser.saveButtonMnemonic"_s),
		$($of($Integer::valueOf(zero))),
		$of("FileChooser.openButtonMnemonic"_s),
		$($of($Integer::valueOf(zero))),
		$of("FileChooser.updateButtonMnemonic"_s),
		$($of($Integer::valueOf(zero))),
		$of("FileChooser.helpButtonMnemonic"_s),
		$($of($Integer::valueOf(zero))),
		$of("FileChooser.directoryOpenButtonMnemonic"_s),
		$($of($Integer::valueOf(zero))),
		$of("FileChooser.lookInLabelMnemonic"_s),
		$($of($Integer::valueOf(zero))),
		$of("FileChooser.fileNameLabelMnemonic"_s),
		$($of($Integer::valueOf(zero))),
		$of("FileChooser.filesOfTypeLabelMnemonic"_s),
		$($of($Integer::valueOf(zero))),
		$of("Focus.color"_s),
		$of(focusRingColor),
		$of("FormattedTextField.focusInputMap"_s),
		$($of(aquaKeyBindings->getFormattedTextFieldInputMap())),
		$of("FormattedTextField.font"_s),
		$of(controlFont),
		$of("FormattedTextField.background"_s),
		$of(textBackground),
		$of("FormattedTextField.foreground"_s),
		$of(textForeground),
		$of("FormattedTextField.inactiveForeground"_s),
		$of(textInactiveText),
		$of("FormattedTextField.inactiveBackground"_s),
		$of(textInactiveBackground),
		$of("FormattedTextField.selectionBackground"_s),
		$of(textHighlight),
		$of("FormattedTextField.selectionForeground"_s),
		$of(textHighlightText),
		$of("FormattedTextField.caretForeground"_s),
		$of(textForeground),
		$of("FormattedTextField.caretBlinkRate"_s),
		$($of($Integer::valueOf(textCaretBlinkRate))),
		$of("FormattedTextField.border"_s),
		$of(textFieldBorder),
		$of("FormattedTextField.margin"_s),
		$of(zeroInsets),
		$of("IconButton.font"_s),
		$of(controlSmallFont),
		$of("InternalFrame.titleFont"_s),
		$of(menuFont),
		$of("InternalFrame.background"_s),
		$of(windowBackgroundColor),
		$of("InternalFrame.borderColor"_s),
		$of(windowBackgroundColor),
		$of("InternalFrame.borderShadow"_s),
		$of($Color::red),
		$of("InternalFrame.borderDarkShadow"_s),
		$of($Color::green),
		$of("InternalFrame.borderHighlight"_s),
		$of($Color::blue),
		$of("InternalFrame.borderLight"_s),
		$of($Color::yellow),
		$of("InternalFrame.opaque"_s),
		$of($Boolean::FALSE),
		$of("InternalFrame.border"_s),
		($Object*)nullptr,
		$of("InternalFrame.icon"_s),
		($Object*)nullptr,
		$of("InternalFrame.paletteBorder"_s),
		($Object*)nullptr,
		$of("InternalFrame.paletteTitleFont"_s),
		$of(menuFont),
		$of("InternalFrame.paletteBackground"_s),
		$of(windowBackgroundColor),
		$of("InternalFrame.optionDialogBorder"_s),
		($Object*)nullptr,
		$of("InternalFrame.optionDialogTitleFont"_s),
		$of(menuFont),
		$of("InternalFrame.optionDialogBackground"_s),
		$of(windowBackgroundColor),
		$of("InternalFrame.closeIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19)),
		$of("InternalFrame.maximizeIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20)),
		$of("InternalFrame.iconifyIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21)),
		$of("InternalFrame.minimizeIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21)),
		$of("InternalFrame.closeSound"_s),
		($Object*)nullptr,
		$of("InternalFrame.maximizeSound"_s),
		($Object*)nullptr,
		$of("InternalFrame.minimizeSound"_s),
		($Object*)nullptr,
		$of("InternalFrame.restoreDownSound"_s),
		($Object*)nullptr,
		$of("InternalFrame.restoreUpSound"_s),
		($Object*)nullptr,
		$of("InternalFrame.activeTitleBackground"_s),
		$of(windowBackgroundColor),
		$of("InternalFrame.activeTitleForeground"_s),
		$of(textForeground),
		$of("InternalFrame.inactiveTitleBackground"_s),
		$of(windowBackgroundColor),
		$of("InternalFrame.inactiveTitleForeground"_s),
		$of(textInactiveText),
		$of("InternalFrame.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("shift ESCAPE"_s),
			$of("showSystemMenu"_s),
			$of("ctrl SPACE"_s),
			$of("showSystemMenu"_s),
			$of("ESCAPE"_s),
			$of("hideSystemMenu"_s)
		})),
		$of("TitledBorder.font"_s),
		$of(controlFont),
		$of("TitledBorder.titleColor"_s),
		$of(black),
		$of("TitledBorder.aquaVariant"_s),
		$of(aquaTitledBorder),
		$of("InsetBorder.aquaVariant"_s),
		$of(aquaInsetBorder),
		$of("Label.font"_s),
		$of(controlFont),
		$of("Label.background"_s),
		$of(controlBackgroundColor),
		$of("Label.foreground"_s),
		$of(black),
		$of("Label.disabledForeground"_s),
		$of(disabled),
		$of("Label.disabledShadow"_s),
		$of(disabledShadow),
		$of("Label.opaque"_s),
		$of(useOpaqueComponents),
		$of("Label.border"_s),
		($Object*)nullptr,
		$of("List.font"_s),
		$of(viewFont),
		$of("List.background"_s),
		$of(white),
		$of("List.foreground"_s),
		$of(black),
		$of("List.selectionBackground"_s),
		$of(selectionBackground),
		$of("List.selectionForeground"_s),
		$of(selectionForeground),
		$of("List.selectionInactiveBackground"_s),
		$of(selectionInactiveBackground),
		$of("List.selectionInactiveForeground"_s),
		$of(selectionInactiveForeground),
		$of("List.focusCellHighlightBorder"_s),
		$of(focusCellHighlightBorder),
		$of("List.border"_s),
		($Object*)nullptr,
		$of("List.cellRenderer"_s),
		listCellRendererActiveValue,
		$of("List.sourceListBackgroundPainter"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22)),
		$of("List.sourceListSelectionBackgroundPainter"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23)),
		$of("List.sourceListFocusedSelectionBackgroundPainter"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24)),
		$of("List.evenRowBackgroundPainter"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25)),
		$of("List.oddRowBackgroundPainter"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26)),
		$of("List.focusInputMap"_s),
		$($of(aquaKeyBindings->getListInputMap())),
		$of("Menu.font"_s),
		$of(menuFont),
		$of("Menu.acceleratorFont"_s),
		$of(menuFont),
		$of("Menu.background"_s),
		$of(menuBackgroundColor),
		$of("Menu.foreground"_s),
		$of(menuForegroundColor),
		$of("Menu.selectionBackground"_s),
		$of(menuSelectedBackgroundColor),
		$of("Menu.selectionForeground"_s),
		$of(menuSelectedForegroundColor),
		$of("Menu.disabledBackground"_s),
		$of(menuDisabledBackgroundColor),
		$of("Menu.disabledForeground"_s),
		$of(menuDisabledForegroundColor),
		$of("Menu.acceleratorForeground"_s),
		$of(menuAccelForegroundColor),
		$of("Menu.acceleratorSelectionForeground"_s),
		$of(menuAccelSelectionForegroundColor),
		$of("Menu.border"_s),
		$of(menuBorder),
		$of("Menu.borderPainted"_s),
		$of($Boolean::FALSE),
		$of("Menu.margin"_s),
		$of(menuItemMargin),
		$of("Menu.arrowIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27)),
		$of("Menu.consumesTabs"_s),
		$of($Boolean::TRUE),
		$of("Menu.menuPopupOffsetY"_s),
		$($of($Integer::valueOf(1))),
		$of("Menu.submenuPopupOffsetY"_s),
		$($of($Integer::valueOf(-4))),
		$of("MenuBar.font"_s),
		$of(menuFont),
		$of("MenuBar.background"_s),
		$of(menuBackgroundColor),
		$of("MenuBar.foreground"_s),
		$of(menuForegroundColor),
		$of("MenuBar.border"_s),
		$of($$new($AquaMenuBarBorder)),
		$of("MenuBar.margin"_s),
		$of($$new($InsetsUIResource, 0, 8, 0, 8)),
		$of("MenuBar.selectionBackground"_s),
		$of(menuSelectedBackgroundColor),
		$of("MenuBar.selectionForeground"_s),
		$of(menuSelectedForegroundColor),
		$of("MenuBar.disabledBackground"_s),
		$of(menuDisabledBackgroundColor),
		$of("MenuBar.disabledForeground"_s),
		$of(menuDisabledForegroundColor),
		$of("MenuBar.backgroundPainter"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28)),
		$of("MenuBar.selectedBackgroundPainter"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29)),
		$of("MenuItem.font"_s),
		$of(menuFont),
		$of("MenuItem.acceleratorFont"_s),
		$of(menuFont),
		$of("MenuItem.background"_s),
		$of(menuBackgroundColor),
		$of("MenuItem.foreground"_s),
		$of(menuForegroundColor),
		$of("MenuItem.selectionBackground"_s),
		$of(menuSelectedBackgroundColor),
		$of("MenuItem.selectionForeground"_s),
		$of(menuSelectedForegroundColor),
		$of("MenuItem.disabledBackground"_s),
		$of(menuDisabledBackgroundColor),
		$of("MenuItem.disabledForeground"_s),
		$of(menuDisabledForegroundColor),
		$of("MenuItem.acceleratorForeground"_s),
		$of(menuAccelForegroundColor),
		$of("MenuItem.acceleratorSelectionForeground"_s),
		$of(menuAccelSelectionForegroundColor),
		$of("MenuItem.acceleratorDelimiter"_s),
		$of(""_s),
		$of("MenuItem.border"_s),
		$of(menuBorder),
		$of("MenuItem.margin"_s),
		$of(menuItemMargin),
		$of("MenuItem.borderPainted"_s),
		$of($Boolean::TRUE),
		$of("MenuItem.selectedBackgroundPainter"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30)),
		$of("OptionPane.font"_s),
		$of(alertHeaderFont),
		$of("OptionPane.messageFont"_s),
		$of(controlFont),
		$of("OptionPane.buttonFont"_s),
		$of(controlFont),
		$of("OptionPane.background"_s),
		$of(windowBackgroundColor),
		$of("OptionPane.foreground"_s),
		$of(black),
		$of("OptionPane.messageForeground"_s),
		$of(black),
		$of("OptionPane.border"_s),
		$of($$new($BorderUIResource$EmptyBorderUIResource, 12, 21, 17, 21)),
		$of("OptionPane.messageAreaBorder"_s),
		$of(zeroBorder),
		$of("OptionPane.buttonAreaBorder"_s),
		$of($$new($BorderUIResource$EmptyBorderUIResource, 13, 0, 0, 0)),
		$of("OptionPane.minimumSize"_s),
		$of($$new($DimensionUIResource, 262, 90)),
		$of("OptionPane.errorIcon"_s),
		$of(stopIcon),
		$of("OptionPane.informationIcon"_s),
		$of(confirmIcon),
		$of("OptionPane.warningIcon"_s),
		$of(cautionIcon),
		$of("OptionPane.questionIcon"_s),
		$of(confirmIcon),
		$of("_SecurityDecisionIcon"_s),
		$of(securityIcon),
		$of("OptionPane.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("close"_s)
		})),
		$of("OptionPane.errorSound"_s),
		($Object*)nullptr,
		$of("OptionPane.informationSound"_s),
		($Object*)nullptr,
		$of("OptionPane.questionSound"_s),
		($Object*)nullptr,
		$of("OptionPane.warningSound"_s),
		($Object*)nullptr,
		$of("OptionPane.buttonClickThreshhold"_s),
		$($of($Integer::valueOf(500))),
		$of("OptionPane.yesButtonMnemonic"_s),
		$of(""_s),
		$of("OptionPane.noButtonMnemonic"_s),
		$of(""_s),
		$of("OptionPane.okButtonMnemonic"_s),
		$of(""_s),
		$of("OptionPane.cancelButtonMnemonic"_s),
		$of(""_s),
		$of("Panel.font"_s),
		$of(controlFont),
		$of("Panel.background"_s),
		$of(panelBackgroundColor),
		$of("Panel.foreground"_s),
		$of(black),
		$of("Panel.opaque"_s),
		$of(useOpaqueComponents),
		$of("PasswordField.focusInputMap"_s),
		$($of(aquaKeyBindings->getPasswordFieldInputMap())),
		$of("PasswordField.font"_s),
		$of(controlFont),
		$of("PasswordField.background"_s),
		$of(textBackground),
		$of("PasswordField.foreground"_s),
		$of(textForeground),
		$of("PasswordField.inactiveForeground"_s),
		$of(textInactiveText),
		$of("PasswordField.inactiveBackground"_s),
		$of(textInactiveBackground),
		$of("PasswordField.selectionBackground"_s),
		$of(textHighlight),
		$of("PasswordField.selectionForeground"_s),
		$of(textHighlightText),
		$of("PasswordField.caretForeground"_s),
		$of(textForeground),
		$of("PasswordField.caretBlinkRate"_s),
		$($of($Integer::valueOf(textCaretBlinkRate))),
		$of("PasswordField.border"_s),
		$of(textFieldBorder),
		$of("PasswordField.margin"_s),
		$of(zeroInsets),
		$of("PasswordField.echoChar"_s),
		$($of($Character::valueOf((char16_t)9679))),
		$of("PasswordField.capsLockIconColor"_s),
		$of(textPasswordFieldCapsLockIconColor),
		$of("PopupMenu.font"_s),
		$of(menuFont),
		$of("PopupMenu.background"_s),
		$of(menuBackgroundColor),
		$of("PopupMenu.translucentBackground"_s),
		$of(white),
		$of("PopupMenu.foreground"_s),
		$of(menuForegroundColor),
		$of("PopupMenu.selectionBackground"_s),
		$of(menuSelectedBackgroundColor),
		$of("PopupMenu.selectionForeground"_s),
		$of(menuSelectedForegroundColor),
		$of("PopupMenu.border"_s),
		$of(menuBorder),
		$of("ProgressBar.font"_s),
		$of(controlFont),
		$of("ProgressBar.foreground"_s),
		$of(black),
		$of("ProgressBar.background"_s),
		$of(controlBackgroundColor),
		$of("ProgressBar.selectionForeground"_s),
		$of(black),
		$of("ProgressBar.selectionBackground"_s),
		$of(white),
		$of("ProgressBar.border"_s),
		$of($$new($BorderUIResource, $($BorderFactory::createEmptyBorder()))),
		$of("ProgressBar.repaintInterval"_s),
		$($of($Integer::valueOf(20))),
		$of("RadioButton.background"_s),
		$of(controlBackgroundColor),
		$of("RadioButton.foreground"_s),
		$of(black),
		$of("RadioButton.disabledText"_s),
		$of(disabled),
		$of("RadioButton.select"_s),
		$of(selected),
		$of("RadioButton.icon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31)),
		$of("RadioButton.font"_s),
		$of(controlFont),
		$of("RadioButton.border"_s),
		$($of($AquaButtonBorder::getBevelButtonBorder())),
		$of("RadioButton.margin"_s),
		$of($$new($InsetsUIResource, 1, 1, 0, 1)),
		$of("RadioButton.focusInputMap"_s),
		$of(controlFocusInputMap),
		$of("RadioButtonMenuItem.font"_s),
		$of(menuFont),
		$of("RadioButtonMenuItem.acceleratorFont"_s),
		$of(menuFont),
		$of("RadioButtonMenuItem.background"_s),
		$of(menuBackgroundColor),
		$of("RadioButtonMenuItem.foreground"_s),
		$of(menuForegroundColor),
		$of("RadioButtonMenuItem.selectionBackground"_s),
		$of(menuSelectedBackgroundColor),
		$of("RadioButtonMenuItem.selectionForeground"_s),
		$of(menuSelectedForegroundColor),
		$of("RadioButtonMenuItem.disabledBackground"_s),
		$of(menuDisabledBackgroundColor),
		$of("RadioButtonMenuItem.disabledForeground"_s),
		$of(menuDisabledForegroundColor),
		$of("RadioButtonMenuItem.acceleratorForeground"_s),
		$of(menuAccelForegroundColor),
		$of("RadioButtonMenuItem.acceleratorSelectionForeground"_s),
		$of(menuAccelSelectionForegroundColor),
		$of("RadioButtonMenuItem.acceleratorDelimiter"_s),
		$of(""_s),
		$of("RadioButtonMenuItem.border"_s),
		$of(menuBorder),
		$of("RadioButtonMenuItem.margin"_s),
		$of(menuItemMargin),
		$of("RadioButtonMenuItem.borderPainted"_s),
		$of($Boolean::TRUE),
		$of("RadioButtonMenuItem.checkIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17)),
		$of("RadioButtonMenuItem.dashIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18)),
		$of("Separator.background"_s),
		($Object*)nullptr,
		$of("Separator.foreground"_s),
		$of($$new($ColorUIResource, 212, 212, 212)),
		$of("ScrollBar.border"_s),
		($Object*)nullptr,
		$of("ScrollBar.focusInputMap"_s),
		$($of(aquaKeyBindings->getScrollBarInputMap())),
		$of("ScrollBar.focusInputMap.RightToLeft"_s),
		$($of(aquaKeyBindings->getScrollBarRightToLeftInputMap())),
		$of("ScrollBar.width"_s),
		$($of($Integer::valueOf(16))),
		$of("ScrollBar.background"_s),
		$of(white),
		$of("ScrollBar.foreground"_s),
		$of(black),
		$of("ScrollPane.font"_s),
		$of(controlFont),
		$of("ScrollPane.background"_s),
		$of(white),
		$of("ScrollPane.foreground"_s),
		$of(black),
		$of("ScrollPane.border"_s),
		$of(scollListBorder),
		$of("ScrollPane.viewportBorder"_s),
		($Object*)nullptr,
		$of("ScrollPane.ancestorInputMap"_s),
		$($of(aquaKeyBindings->getScrollPaneInputMap())),
		$of("ScrollPane.ancestorInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, 0))),
		$of("Viewport.font"_s),
		$of(controlFont),
		$of("Viewport.background"_s),
		$of(white),
		$of("Viewport.foreground"_s),
		$of(black),
		$of("Slider.foreground"_s),
		$of(black),
		$of("Slider.background"_s),
		$of(controlBackgroundColor),
		$of("Slider.font"_s),
		$of(controlSmallFont),
		$of("Slider.tickColor"_s),
		$of($$new($ColorUIResource, $Color::GRAY)),
		$of("Slider.border"_s),
		($Object*)nullptr,
		$of("Slider.focusInsets"_s),
		$of($$new($InsetsUIResource, 2, 2, 2, 2)),
		$of("Slider.focusInputMap"_s),
		$($of(aquaKeyBindings->getSliderInputMap())),
		$of("Slider.focusInputMap.RightToLeft"_s),
		$($of(aquaKeyBindings->getSliderRightToLeftInputMap())),
		$of("Spinner.font"_s),
		$of(controlFont),
		$of("Spinner.background"_s),
		$of(controlBackgroundColor),
		$of("Spinner.foreground"_s),
		$of(black),
		$of("Spinner.border"_s),
		($Object*)nullptr,
		$of("Spinner.arrowButtonSize"_s),
		$of($$new($Dimension, 16, 5)),
		$of("Spinner.ancestorInputMap"_s),
		$($of(aquaKeyBindings->getSpinnerInputMap())),
		$of("Spinner.editorBorderPainted"_s),
		$of($Boolean::TRUE),
		$of("Spinner.editorAlignment"_s),
		$($of($Integer::valueOf($SwingConstants::TRAILING))),
		$of("SplitPane.background"_s),
		$of(panelBackgroundColor),
		$of("SplitPane.border"_s),
		$of(scollListBorder),
		$of("SplitPane.dividerSize"_s),
		$($of($Integer::valueOf(9))),
		$of("SplitPaneDivider.border"_s),
		($Object*)nullptr,
		$of("SplitPaneDivider.horizontalGradientVariant"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32)),
		$of("TabbedPane.font"_s),
		$of(controlFont),
		$of("TabbedPane.smallFont"_s),
		$of(controlSmallFont),
		$of("TabbedPane.useSmallLayout"_s),
		$of($Boolean::FALSE),
		$of("TabbedPane.background"_s),
		$of(tabBackgroundColor),
		$of("TabbedPane.foreground"_s),
		$of(black),
		$of("TabbedPane.opaque"_s),
		$of(useOpaqueComponents),
		$of("TabbedPane.textIconGap"_s),
		$($of($Integer::valueOf(4))),
		$of("TabbedPane.tabInsets"_s),
		$of($$new($InsetsUIResource, 0, 10, 3, 10)),
		$of("TabbedPane.leftTabInsets"_s),
		$of($$new($InsetsUIResource, 0, 10, 3, 10)),
		$of("TabbedPane.rightTabInsets"_s),
		$of($$new($InsetsUIResource, 0, 10, 3, 10)),
		$of("TabbedPane.tabAreaInsets"_s),
		$of($$new($InsetsUIResource, 3, 9, -1, 9)),
		$of("TabbedPane.contentBorderInsets"_s),
		$of($$new($InsetsUIResource, 8, 0, 0, 0)),
		$of("TabbedPane.selectedTabPadInsets"_s),
		$of($$new($InsetsUIResource, 0, 0, 0, 0)),
		$of("TabbedPane.tabsOverlapBorder"_s),
		$of($Boolean::TRUE),
		$of("TabbedPane.selectedTabTitlePressedColor"_s),
		$of(selectedTabTitlePressedColor),
		$of("TabbedPane.selectedTabTitleDisabledColor"_s),
		$of(selectedTabTitleDisabledColor),
		$of("TabbedPane.selectedTabTitleNormalColor"_s),
		$JRSUIUtils::isMacOSXBigSurOrAbove() ? $of(selectedControlTextColor) : $of(selectedTabTitleNormalColor),
		$of("TabbedPane.selectedTabTitleShadowDisabledColor"_s),
		$of(selectedTabTitleShadowDisabledColor),
		$of("TabbedPane.selectedTabTitleShadowNormalColor"_s),
		$of(selectedTabTitleShadowNormalColor),
		$of("TabbedPane.nonSelectedTabTitleNormalColor"_s),
		$of(nonSelectedTabTitleNormalColor),
		$of("Table.font"_s),
		$of(viewFont),
		$of("Table.foreground"_s),
		$of(black),
		$of("Table.background"_s),
		$of(white),
		$of("Table.selectionForeground"_s),
		$of(selectionForeground),
		$of("Table.selectionBackground"_s),
		$of(selectionBackground),
		$of("Table.selectionInactiveBackground"_s),
		$of(selectionInactiveBackground),
		$of("Table.selectionInactiveForeground"_s),
		$of(selectionInactiveForeground),
		$of("Table.gridColor"_s),
		$of(white),
		$of("Table.focusCellBackground"_s),
		$of(textHighlightText),
		$of("Table.focusCellForeground"_s),
		$of(textHighlight),
		$of("Table.focusCellHighlightBorder"_s),
		$of(focusCellHighlightBorder),
		$of("Table.scrollPaneBorder"_s),
		$of(scollListBorder),
		$of("Table.ancestorInputMap"_s),
		$($of(aquaKeyBindings->getTableInputMap())),
		$of("Table.ancestorInputMap.RightToLeft"_s),
		$($of(aquaKeyBindings->getTableRightToLeftInputMap())),
		$of("TableHeader.font"_s),
		$of(controlSmallFont),
		$of("TableHeader.foreground"_s),
		$of(black),
		$of("TableHeader.background"_s),
		$of(white),
		$of("TableHeader.cellBorder"_s),
		$of(listHeaderBorder),
		$of("TextArea.focusInputMap"_s),
		$($of(aquaKeyBindings->getMultiLineTextInputMap())),
		$of("TextArea.font"_s),
		$of(controlFont),
		$of("TextArea.background"_s),
		$of(textBackground),
		$of("TextArea.foreground"_s),
		$of(textForeground),
		$of("TextArea.inactiveForeground"_s),
		$of(textInactiveText),
		$of("TextArea.inactiveBackground"_s),
		$of(textInactiveBackground),
		$of("TextArea.selectionBackground"_s),
		$of(textHighlight),
		$of("TextArea.selectionForeground"_s),
		$of(textHighlightText),
		$of("TextArea.caretForeground"_s),
		$of(textForeground),
		$of("TextArea.caretBlinkRate"_s),
		$($of($Integer::valueOf(textCaretBlinkRate))),
		$of("TextArea.border"_s),
		textAreaBorder,
		$of("TextArea.margin"_s),
		$of(zeroInsets),
		$of("TextComponent.selectionBackgroundInactive"_s),
		$of(textHighlightInactive),
		$of("TextField.focusInputMap"_s),
		$($of(aquaKeyBindings->getTextFieldInputMap())),
		$of("TextField.font"_s),
		$of(controlFont),
		$of("TextField.background"_s),
		$of(textBackground),
		$of("TextField.foreground"_s),
		$of(textForeground),
		$of("TextField.inactiveForeground"_s),
		$of(textInactiveText),
		$of("TextField.inactiveBackground"_s),
		$of(textInactiveBackground),
		$of("TextField.selectionBackground"_s),
		$of(textHighlight),
		$of("TextField.selectionForeground"_s),
		$of(textHighlightText),
		$of("TextField.caretForeground"_s),
		$of(textForeground),
		$of("TextField.caretBlinkRate"_s),
		$($of($Integer::valueOf(textCaretBlinkRate))),
		$of("TextField.border"_s),
		$of(textFieldBorder),
		$of("TextField.margin"_s),
		$of(zeroInsets),
		$of("TextPane.focusInputMap"_s),
		$($of(aquaKeyBindings->getMultiLineTextInputMap())),
		$of("TextPane.font"_s),
		$of(controlFont),
		$of("TextPane.background"_s),
		$of(textBackground),
		$of("TextPane.foreground"_s),
		$of(textForeground),
		$of("TextPane.selectionBackground"_s),
		$of(textHighlight),
		$of("TextPane.selectionForeground"_s),
		$of(textHighlightText),
		$of("TextPane.caretForeground"_s),
		$of(textForeground),
		$of("TextPane.caretBlinkRate"_s),
		$($of($Integer::valueOf(textCaretBlinkRate))),
		$of("TextPane.inactiveForeground"_s),
		$of(textInactiveText),
		$of("TextPane.inactiveBackground"_s),
		$of(textInactiveBackground),
		$of("TextPane.border"_s),
		textAreaBorder,
		$of("TextPane.margin"_s),
		editorMargin,
		$of("ToggleButton.background"_s),
		$of(controlBackgroundColor),
		$of("ToggleButton.foreground"_s),
		$of(black),
		$of("ToggleButton.disabledText"_s),
		$of(disabled),
		$of("ToggleButton.border"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15)),
		$of("ToggleButton.font"_s),
		$of(controlFont),
		$of("ToggleButton.focusInputMap"_s),
		$of(controlFocusInputMap),
		$of("ToggleButton.margin"_s),
		$of($$new($InsetsUIResource, 2, 2, 2, 2)),
		$of("ToolBar.font"_s),
		$of(controlFont),
		$of("ToolBar.background"_s),
		$of(panelBackgroundColor),
		$of("ToolBar.foreground"_s),
		$of($$new($ColorUIResource, $Color::gray)),
		$of("ToolBar.dockingBackground"_s),
		$of(panelBackgroundColor),
		$of("ToolBar.dockingForeground"_s),
		$of(selectionBackground),
		$of("ToolBar.floatingBackground"_s),
		$of(panelBackgroundColor),
		$of("ToolBar.floatingForeground"_s),
		$of($$new($ColorUIResource, $Color::darkGray)),
		$of("ToolBar.border"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33)),
		$of("ToolBar.borderHandleColor"_s),
		$of(toolbarDragHandleColor),
		$of("ToolBar.separatorSize"_s),
		($Object*)nullptr,
		$of("ToolBarButton.margin"_s),
		$of($$new($InsetsUIResource, 3, 3, 3, 3)),
		$of("ToolBarButton.insets"_s),
		$of($$new($InsetsUIResource, 1, 1, 1, 1)),
		$of("ToolTip.font"_s),
		$of(controlSmallFont),
		$of("ToolTip.background"_s),
		$of(toolTipBackground),
		$of("ToolTip.foreground"_s),
		$of(black),
		$of("ToolTip.border"_s),
		$of(toolTipBorder),
		$of("Tree.font"_s),
		$of(viewFont),
		$of("Tree.background"_s),
		$of(white),
		$of("Tree.foreground"_s),
		$of(black),
		$of("Tree.hash"_s),
		$of(white),
		$of("Tree.line"_s),
		$of(white),
		$of("Tree.textForeground"_s),
		$of(black),
		$of("Tree.textBackground"_s),
		$of(white),
		$of("Tree.selectionForeground"_s),
		$of(selectionForeground),
		$of("Tree.selectionBackground"_s),
		$of(selectionBackground),
		$of("Tree.selectionInactiveBackground"_s),
		$of(selectionInactiveBackground),
		$of("Tree.selectionInactiveForeground"_s),
		$of(selectionInactiveForeground),
		$of("Tree.selectionBorderColor"_s),
		$of(selectionBackground),
		$of("Tree.editorBorderSelectionColor"_s),
		($Object*)nullptr,
		$of("Tree.leftChildIndent"_s),
		$($of($Integer::valueOf(7))),
		$of("Tree.rightChildIndent"_s),
		$($of($Integer::valueOf(13))),
		$of("Tree.rowHeight"_s),
		$($of($Integer::valueOf(19))),
		$of("Tree.scrollsOnExpand"_s),
		$of($Boolean::FALSE),
		$of("Tree.openIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34)),
		$of("Tree.closedIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35)),
		$of("Tree.leafIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36)),
		$of("Tree.expandedIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37)),
		$of("Tree.collapsedIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38)),
		$of("Tree.rightToLeftCollapsedIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39)),
		$of("Tree.changeSelectionWithFocus"_s),
		$of($Boolean::TRUE),
		$of("Tree.drawsFocusBorderAroundIcon"_s),
		$of($Boolean::FALSE),
		$of("Tree.focusInputMap"_s),
		$($of(aquaKeyBindings->getTreeInputMap())),
		$of("Tree.focusInputMap.RightToLeft"_s),
		$($of(aquaKeyBindings->getTreeRightToLeftInputMap())),
		$of("Tree.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("cancel"_s)
		})))
	}));
	$nc(table)->putDefaults(defaults);
	$SwingUtilities2::putAATextInfo(true, table);
}

void AquaLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
}

void AquaLookAndFeel::initClassDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$var($String, basicPackageName, "javax.swing.plaf.basic."_s);
	$var($ObjectArray, uiDefaults, $new($ObjectArray, {
		$of("ButtonUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaButtonUI"_s})),
		$of("CheckBoxUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaButtonCheckBoxUI"_s})),
		$of("CheckBoxMenuItemUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaMenuItemUI"_s})),
		$of("LabelUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaLabelUI"_s})),
		$of("ListUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaListUI"_s})),
		$of("MenuUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaMenuUI"_s})),
		$of("MenuItemUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaMenuItemUI"_s})),
		$of("OptionPaneUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaOptionPaneUI"_s})),
		$of("PanelUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaPanelUI"_s})),
		$of("RadioButtonMenuItemUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaMenuItemUI"_s})),
		$of("RadioButtonUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaButtonRadioUI"_s})),
		$of("ProgressBarUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaProgressBarUI"_s})),
		$of("RootPaneUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaRootPaneUI"_s})),
		$of("SliderUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaSliderUI"_s})),
		$of("ScrollBarUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaScrollBarUI"_s})),
		$of("TabbedPaneUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, ($JRSUIUtils$TabbedPane::shouldUseTabbedPaneContrastUI() ? "AquaTabbedPaneContrastUI"_s : "AquaTabbedPaneUI"_s)})),
		$of("TableUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaTableUI"_s})),
		$of("ToggleButtonUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaButtonToggleUI"_s})),
		$of("ToolBarUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaToolBarUI"_s})),
		$of("ToolTipUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaToolTipUI"_s})),
		$of("TreeUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaTreeUI"_s})),
		$of("InternalFrameUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaInternalFrameUI"_s})),
		$of("DesktopIconUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaInternalFrameDockIconUI"_s})),
		$of("DesktopPaneUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaInternalFramePaneUI"_s})),
		$of("EditorPaneUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaEditorPaneUI"_s})),
		$of("TextFieldUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaTextFieldUI"_s})),
		$of("TextPaneUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaTextPaneUI"_s})),
		$of("ComboBoxUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaComboBoxUI"_s})),
		$of("PopupMenuUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaPopupMenuUI"_s})),
		$of("TextAreaUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaTextAreaUI"_s})),
		$of("MenuBarUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaMenuBarUI"_s})),
		$of("FileChooserUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaFileChooserUI"_s})),
		$of("PasswordFieldUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaTextPasswordFieldUI"_s})),
		$of("TableHeaderUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaTableHeaderUI"_s})),
		$of("FormattedTextFieldUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaTextFieldFormattedUI"_s})),
		$of("SpinnerUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaSpinnerUI"_s})),
		$of("SplitPaneUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaSplitPaneUI"_s})),
		$of("ScrollPaneUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaScrollPaneUI"_s})),
		$of("PopupMenuSeparatorUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaPopupMenuSeparatorUI"_s})),
		$of("SeparatorUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaPopupMenuSeparatorUI"_s})),
		$of("ToolBarSeparatorUI"_s),
		$of($$str({AquaLookAndFeel::PKG_PREFIX, "AquaToolBarSeparatorUI"_s})),
		$of("ColorChooserUI"_s),
		$of($$str({basicPackageName, "BasicColorChooserUI"_s})),
		$of("ViewportUI"_s),
		$of($$str({basicPackageName, "BasicViewportUI"_s}))
	}));
	$nc(table)->putDefaults(uiDefaults);
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$43($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getTreeRightToLeftCollapsedIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$42($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getTreeCollapsedIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$41($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getTreeExpandedIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$40($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getTreeDocumentIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$39($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getTreeFolderIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$38($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getTreeOpenFolderIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$37($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaToolBarUI::getToolBarBorder());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$35($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaSplitPaneDividerUI::getHorizontalSplitDividerGradientVariant());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$32($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaButtonRadioUI::getSizingRadioButtonIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$31($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaMenuPainter::getSelectedMenuItemPainter());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$30($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaMenuPainter::getSelectedMenuBarItemPainter());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$29($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaMenuPainter::getMenuBarPainter());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$28($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getMenuArrowIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$27($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaListUI::getListOddBackgroundPainter());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$26($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaListUI::getListEvenBackgroundPainter());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$25($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaListUI::getSourceListFocusedSelectionBackgroundPainter());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$24($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaListUI::getSourceListSelectionBackgroundPainter());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$23($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaListUI::getSourceListBackgroundPainter());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$21($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaInternalFrameUI::exportMinimizeIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$20($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaInternalFrameUI::exportZoomIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$19($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaInternalFrameUI::exportCloseIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$18($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getMenuItemDashIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$17($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getMenuItemCheckIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$16($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaButtonCheckBoxUI::getSizingCheckBoxIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$15($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaButtonBorder::getDynamicButtonBorder());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$14($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getLockImageIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$13($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getStopImageIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$12($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getCautionImageIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$11($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getConfirmImageIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$10($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaFonts::getViewFont());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$9($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaFonts::getMenuFont());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$8($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaFonts::getAlertHeaderFont());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$7($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaFonts::getControlTextSmallFont());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$6($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaFonts::getControlTextFont());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$5($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($BasicBorders::getInternalFrameBorder());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$4($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaGroupBorder::getTitlelessBorder());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$3($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaGroupBorder::getBorderForTitledBorder());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$2($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaScrollRegionBorder::getScrollRegionBorder());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$1($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaTextFieldBorder::getTextFieldBorder());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$0($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($new($BasicBorders$MarginBorder));
}

AquaLookAndFeel::AquaLookAndFeel() {
}

void clinit$AquaLookAndFeel($Class* class$) {
	$assignStatic(AquaLookAndFeel::sPropertyPrefix, "apple.laf."_s);
	$assignStatic(AquaLookAndFeel::PKG_PREFIX, "com.apple.laf."_s);
}

$Class* AquaLookAndFeel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38::load$(name, initialize);
		}
		if (name->equals(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::classInfo$.name)) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::load$(name, initialize);
		}
	}
	$loadClass(AquaLookAndFeel, name, initialize, &_AquaLookAndFeel_ClassInfo_, clinit$AquaLookAndFeel, allocate$AquaLookAndFeel);
	return class$;
}

$Class* AquaLookAndFeel::class$ = nullptr;

		} // laf
	} // apple
} // com