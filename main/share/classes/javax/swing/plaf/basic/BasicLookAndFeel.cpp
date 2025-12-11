#include <javax/swing/plaf/basic/BasicLookAndFeel.h>

#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Field.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashSet.h>
#include <java/util/Locale.h>
#include <javax/sound/sampled/Clip.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/BorderUIResource$BevelBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource$EmptyBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DimensionUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/plaf/basic/BasicIconFactory.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel$1.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel$2.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel$3.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel$AWTEventHelper.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel$AudioAction.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/icon/SortArrowIcon.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef ALT_MASK
#undef BOLD
#undef DIALOG
#undef FALSE
#undef GUI_DISPOSED
#undef MENU_KEYBOARD_HELPER_KEY
#undef MONOSPACED
#undef MOUSE_GRABBER_KEY
#undef NAME
#undef PLAIN
#undef RAISED
#undef SANS_SERIF
#undef SERIF
#undef TRAILING
#undef TRUE

using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $SystemColor = ::java::awt::SystemColor;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Field = ::java::lang::reflect::Field;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $BorderUIResource$BevelBorderUIResource = ::javax::swing::plaf::BorderUIResource$BevelBorderUIResource;
using $BorderUIResource$EmptyBorderUIResource = ::javax::swing::plaf::BorderUIResource$EmptyBorderUIResource;
using $BorderUIResource$LineBorderUIResource = ::javax::swing::plaf::BorderUIResource$LineBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DimensionUIResource = ::javax::swing::plaf::DimensionUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicBorders = ::javax::swing::plaf::basic::BasicBorders;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $BasicIconFactory = ::javax::swing::plaf::basic::BasicIconFactory;
using $BasicLookAndFeel$1 = ::javax::swing::plaf::basic::BasicLookAndFeel$1;
using $BasicLookAndFeel$2 = ::javax::swing::plaf::basic::BasicLookAndFeel$2;
using $BasicLookAndFeel$3 = ::javax::swing::plaf::basic::BasicLookAndFeel$3;
using $BasicLookAndFeel$AWTEventHelper = ::javax::swing::plaf::basic::BasicLookAndFeel$AWTEventHelper;
using $BasicLookAndFeel$AudioAction = ::javax::swing::plaf::basic::BasicLookAndFeel$AudioAction;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;
using $BasicPopupMenuUI$MenuKeyboardHelper = ::javax::swing::plaf::basic::BasicPopupMenuUI$MenuKeyboardHelper;
using $BasicPopupMenuUI$MouseGrabber = ::javax::swing::plaf::basic::BasicPopupMenuUI$MouseGrabber;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$UIDefaultsAccessor = ::sun::swing::SwingAccessor$UIDefaultsAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $SortArrowIcon = ::sun::swing::icon::SortArrowIcon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$0(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$1(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$2(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$3(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$4(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$5(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$6(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$7(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$8(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$9(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$($ColorUIResource* yellow) {
		$set(this, yellow, yellow);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$10(yellow, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10>());
	}
	$ColorUIResource* yellow = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::fieldInfos[2] = {
	{"yellow", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, yellow)},
	{}
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/plaf/ColorUIResource;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::*)($ColorUIResource*)>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$($Color* controlLtHighlight, $Color* control, $Color* controlDkShadow, $Color* controlShadow) {
		$set(this, controlLtHighlight, controlLtHighlight);
		$set(this, control, control);
		$set(this, controlDkShadow, controlDkShadow);
		$set(this, controlShadow, controlShadow);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$11(controlLtHighlight, control, controlDkShadow, controlShadow, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11>());
	}
	$Color* controlLtHighlight = nullptr;
	$Color* control = nullptr;
	$Color* controlDkShadow = nullptr;
	$Color* controlShadow = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::fieldInfos[5] = {
	{"controlLtHighlight", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, controlLtHighlight)},
	{"control", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, control)},
	{"controlDkShadow", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, controlDkShadow)},
	{"controlShadow", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, controlShadow)},
	{}
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::*)($Color*,$Color*,$Color*,$Color*)>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$12(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$13(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$14(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$16(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$17(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$18(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$19(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$20(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$21(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$22(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$23(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t zero) {
		this->zero = zero;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$24(zero, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23>());
	}
	int32_t zero = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::fieldInfos[2] = {
	{"zero", "I", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, zero)},
	{}
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::*)(int32_t)>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t ten) {
		this->ten = ten;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$25(ten, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24>());
	}
	int32_t ten = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::fieldInfos[2] = {
	{"ten", "I", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, ten)},
	{}
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::*)(int32_t)>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t zero) {
		this->zero = zero;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$26(zero, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25>());
	}
	int32_t zero = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::fieldInfos[2] = {
	{"zero", "I", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, zero)},
	{}
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::*)(int32_t)>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$27(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$28(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$29(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$30(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$31(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$35(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return BasicLookAndFeel::lambda$initComponentDefaults$36(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32::*)()>(&BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32::class$ = nullptr;

$FieldInfo _BasicLookAndFeel_FieldInfo_[] = {
	{"needsEventHelper", "Z", nullptr, $STATIC, $staticField(BasicLookAndFeel, needsEventHelper)},
	{"audioLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(BasicLookAndFeel, audioLock)},
	{"clipPlaying", "Ljavax/sound/sampled/Clip;", nullptr, $PRIVATE, $field(BasicLookAndFeel, clipPlaying)},
	{"invocator", "Ljavax/swing/plaf/basic/BasicLookAndFeel$AWTEventHelper;", nullptr, 0, $field(BasicLookAndFeel, invocator)},
	{"disposer", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicLookAndFeel, disposer)},
	{}
};

$MethodInfo _BasicLookAndFeel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(BasicLookAndFeel::*)()>(&BasicLookAndFeel::init$))},
	{"createAudioAction", "(Ljava/lang/Object;)Ljavax/swing/Action;", nullptr, $PROTECTED},
	{"getAudioActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED},
	{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC},
	{"getFocusAcceleratorKeyMask", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&BasicLookAndFeel::getFocusAcceleratorKeyMask))},
	{"getUIOfType", "(Ljavax/swing/plaf/ComponentUI;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljavax/swing/plaf/ComponentUI;Ljava/lang/Class<*>;)Ljava/lang/Object;", $STATIC, $method(static_cast<$Object*(*)($ComponentUI*,$Class*)>(&BasicLookAndFeel::getUIOfType))},
	{"initClassDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initResourceBundle", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicLookAndFeel::*)($UIDefaults*)>(&BasicLookAndFeel::initResourceBundle))},
	{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initialize", "()V", nullptr, $PUBLIC},
	{"installAWTEventListener", "()V", nullptr, 0},
	{"installAudioActionMap", "(Ljavax/swing/ActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($ActionMap*)>(&BasicLookAndFeel::installAudioActionMap))},
	{"lambda$initComponentDefaults$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$0))},
	{"lambda$initComponentDefaults$1", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$1))},
	{"lambda$initComponentDefaults$10", "(Ljavax/swing/plaf/ColorUIResource;Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($ColorUIResource*,$UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$10))},
	{"lambda$initComponentDefaults$11", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($Color*,$Color*,$Color*,$Color*,$UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$11))},
	{"lambda$initComponentDefaults$12", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$12))},
	{"lambda$initComponentDefaults$13", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$13))},
	{"lambda$initComponentDefaults$14", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$14))},
	{"lambda$initComponentDefaults$16", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$16))},
	{"lambda$initComponentDefaults$17", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$17))},
	{"lambda$initComponentDefaults$18", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$18))},
	{"lambda$initComponentDefaults$19", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$19))},
	{"lambda$initComponentDefaults$2", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$2))},
	{"lambda$initComponentDefaults$20", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$20))},
	{"lambda$initComponentDefaults$21", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$21))},
	{"lambda$initComponentDefaults$22", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$22))},
	{"lambda$initComponentDefaults$23", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$23))},
	{"lambda$initComponentDefaults$24", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(int32_t,$UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$24))},
	{"lambda$initComponentDefaults$25", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(int32_t,$UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$25))},
	{"lambda$initComponentDefaults$26", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(int32_t,$UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$26))},
	{"lambda$initComponentDefaults$27", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$27))},
	{"lambda$initComponentDefaults$28", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$28))},
	{"lambda$initComponentDefaults$29", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$29))},
	{"lambda$initComponentDefaults$3", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$3))},
	{"lambda$initComponentDefaults$30", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$30))},
	{"lambda$initComponentDefaults$31", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$31))},
	{"lambda$initComponentDefaults$35", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$35))},
	{"lambda$initComponentDefaults$36", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$36))},
	{"lambda$initComponentDefaults$4", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$4))},
	{"lambda$initComponentDefaults$5", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$5))},
	{"lambda$initComponentDefaults$6", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$6))},
	{"lambda$initComponentDefaults$7", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$7))},
	{"lambda$initComponentDefaults$8", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$8))},
	{"lambda$initComponentDefaults$9", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&BasicLookAndFeel::lambda$initComponentDefaults$9))},
	{"loadAudioData", "(Ljava/lang/String;)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(BasicLookAndFeel::*)($String*)>(&BasicLookAndFeel::loadAudioData))},
	{"loadSystemColors", "(Ljavax/swing/UIDefaults;[Ljava/lang/String;Z)V", nullptr, $PROTECTED},
	{"playSound", "(Ljavax/swing/Action;)V", nullptr, $PROTECTED},
	{"playSound", "(Ljavax/swing/JComponent;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($JComponent*,Object$*)>(&BasicLookAndFeel::playSound))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninitialize", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicLookAndFeel_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicLookAndFeel$AWTEventHelper", "javax.swing.plaf.basic.BasicLookAndFeel", "AWTEventHelper", 0},
	{"javax.swing.plaf.basic.BasicLookAndFeel$AudioAction", "javax.swing.plaf.basic.BasicLookAndFeel", "AudioAction", $PRIVATE},
	{"javax.swing.plaf.basic.BasicLookAndFeel$3", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicLookAndFeel$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicLookAndFeel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicLookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.basic.BasicLookAndFeel",
	"javax.swing.LookAndFeel",
	"java.io.Serializable",
	_BasicLookAndFeel_FieldInfo_,
	_BasicLookAndFeel_MethodInfo_,
	nullptr,
	nullptr,
	_BasicLookAndFeel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicLookAndFeel$AWTEventHelper,javax.swing.plaf.basic.BasicLookAndFeel$AudioAction,javax.swing.plaf.basic.BasicLookAndFeel$3,javax.swing.plaf.basic.BasicLookAndFeel$2,javax.swing.plaf.basic.BasicLookAndFeel$1"
};

$Object* allocate$BasicLookAndFeel($Class* clazz) {
	return $of($alloc(BasicLookAndFeel));
}

$String* BasicLookAndFeel::toString() {
	 return this->$LookAndFeel::toString();
}

int32_t BasicLookAndFeel::hashCode() {
	 return this->$LookAndFeel::hashCode();
}

bool BasicLookAndFeel::equals(Object$* arg0) {
	 return this->$LookAndFeel::equals(arg0);
}

$Object* BasicLookAndFeel::clone() {
	 return this->$LookAndFeel::clone();
}

void BasicLookAndFeel::finalize() {
	this->$LookAndFeel::finalize();
}

bool BasicLookAndFeel::needsEventHelper = false;

void BasicLookAndFeel::init$() {
	$LookAndFeel::init$();
	$set(this, audioLock, $new($Object));
	$set(this, invocator, nullptr);
	$set(this, disposer, nullptr);
}

$UIDefaults* BasicLookAndFeel::getDefaults() {
	$var($UIDefaults, table, $new($UIDefaults, 610, 0.75f));
	initClassDefaults(table);
	initSystemColorDefaults(table);
	initComponentDefaults(table);
	return table;
}

void BasicLookAndFeel::initialize() {
	if (BasicLookAndFeel::needsEventHelper) {
		installAWTEventListener();
	}
}

void BasicLookAndFeel::installAWTEventListener() {
	if (this->invocator == nullptr) {
		$set(this, invocator, $new($BasicLookAndFeel$AWTEventHelper, this));
		BasicLookAndFeel::needsEventHelper = true;
		$set(this, disposer, $new($BasicLookAndFeel$1, this));
		$init($AppContext);
		$nc($($AppContext::getAppContext()))->addPropertyChangeListener($AppContext::GUI_DISPOSED, this->disposer);
	}
}

void BasicLookAndFeel::uninitialize() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($AppContext, context, $AppContext::getAppContext());
	$init($BasicPopupMenuUI);
	$synchronized($BasicPopupMenuUI::MOUSE_GRABBER_KEY) {
		$var($Object, grabber, $nc(context)->get($BasicPopupMenuUI::MOUSE_GRABBER_KEY));
		if (grabber != nullptr) {
			$nc(($cast($BasicPopupMenuUI$MouseGrabber, grabber)))->uninstall();
		}
	}
	$synchronized($BasicPopupMenuUI::MENU_KEYBOARD_HELPER_KEY) {
		$var($Object, helper, $nc(context)->get($BasicPopupMenuUI::MENU_KEYBOARD_HELPER_KEY));
		if (helper != nullptr) {
			$nc(($cast($BasicPopupMenuUI$MenuKeyboardHelper, helper)))->uninstall();
		}
	}
	if (this->invocator != nullptr) {
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>(this->invocator));
		$set(this, invocator, nullptr);
	}
	if (this->disposer != nullptr) {
		$nc(context)->removePropertyChangeListener($AppContext::GUI_DISPOSED, this->disposer);
		$set(this, disposer, nullptr);
	}
}

void BasicLookAndFeel::initClassDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$var($String, basicPackageName, "javax.swing.plaf.basic."_s);
	$var($ObjectArray, uiDefaults, $new($ObjectArray, {
		$of("ButtonUI"_s),
		$of($$str({basicPackageName, "BasicButtonUI"_s})),
		$of("CheckBoxUI"_s),
		$of($$str({basicPackageName, "BasicCheckBoxUI"_s})),
		$of("ColorChooserUI"_s),
		$of($$str({basicPackageName, "BasicColorChooserUI"_s})),
		$of("FormattedTextFieldUI"_s),
		$of($$str({basicPackageName, "BasicFormattedTextFieldUI"_s})),
		$of("MenuBarUI"_s),
		$of($$str({basicPackageName, "BasicMenuBarUI"_s})),
		$of("MenuUI"_s),
		$of($$str({basicPackageName, "BasicMenuUI"_s})),
		$of("MenuItemUI"_s),
		$of($$str({basicPackageName, "BasicMenuItemUI"_s})),
		$of("CheckBoxMenuItemUI"_s),
		$of($$str({basicPackageName, "BasicCheckBoxMenuItemUI"_s})),
		$of("RadioButtonMenuItemUI"_s),
		$of($$str({basicPackageName, "BasicRadioButtonMenuItemUI"_s})),
		$of("RadioButtonUI"_s),
		$of($$str({basicPackageName, "BasicRadioButtonUI"_s})),
		$of("ToggleButtonUI"_s),
		$of($$str({basicPackageName, "BasicToggleButtonUI"_s})),
		$of("PopupMenuUI"_s),
		$of($$str({basicPackageName, "BasicPopupMenuUI"_s})),
		$of("ProgressBarUI"_s),
		$of($$str({basicPackageName, "BasicProgressBarUI"_s})),
		$of("ScrollBarUI"_s),
		$of($$str({basicPackageName, "BasicScrollBarUI"_s})),
		$of("ScrollPaneUI"_s),
		$of($$str({basicPackageName, "BasicScrollPaneUI"_s})),
		$of("SplitPaneUI"_s),
		$of($$str({basicPackageName, "BasicSplitPaneUI"_s})),
		$of("SliderUI"_s),
		$of($$str({basicPackageName, "BasicSliderUI"_s})),
		$of("SeparatorUI"_s),
		$of($$str({basicPackageName, "BasicSeparatorUI"_s})),
		$of("SpinnerUI"_s),
		$of($$str({basicPackageName, "BasicSpinnerUI"_s})),
		$of("ToolBarSeparatorUI"_s),
		$of($$str({basicPackageName, "BasicToolBarSeparatorUI"_s})),
		$of("PopupMenuSeparatorUI"_s),
		$of($$str({basicPackageName, "BasicPopupMenuSeparatorUI"_s})),
		$of("TabbedPaneUI"_s),
		$of($$str({basicPackageName, "BasicTabbedPaneUI"_s})),
		$of("TextAreaUI"_s),
		$of($$str({basicPackageName, "BasicTextAreaUI"_s})),
		$of("TextFieldUI"_s),
		$of($$str({basicPackageName, "BasicTextFieldUI"_s})),
		$of("PasswordFieldUI"_s),
		$of($$str({basicPackageName, "BasicPasswordFieldUI"_s})),
		$of("TextPaneUI"_s),
		$of($$str({basicPackageName, "BasicTextPaneUI"_s})),
		$of("EditorPaneUI"_s),
		$of($$str({basicPackageName, "BasicEditorPaneUI"_s})),
		$of("TreeUI"_s),
		$of($$str({basicPackageName, "BasicTreeUI"_s})),
		$of("LabelUI"_s),
		$of($$str({basicPackageName, "BasicLabelUI"_s})),
		$of("ListUI"_s),
		$of($$str({basicPackageName, "BasicListUI"_s})),
		$of("ToolBarUI"_s),
		$of($$str({basicPackageName, "BasicToolBarUI"_s})),
		$of("ToolTipUI"_s),
		$of($$str({basicPackageName, "BasicToolTipUI"_s})),
		$of("ComboBoxUI"_s),
		$of($$str({basicPackageName, "BasicComboBoxUI"_s})),
		$of("TableUI"_s),
		$of($$str({basicPackageName, "BasicTableUI"_s})),
		$of("TableHeaderUI"_s),
		$of($$str({basicPackageName, "BasicTableHeaderUI"_s})),
		$of("InternalFrameUI"_s),
		$of($$str({basicPackageName, "BasicInternalFrameUI"_s})),
		$of("DesktopPaneUI"_s),
		$of($$str({basicPackageName, "BasicDesktopPaneUI"_s})),
		$of("DesktopIconUI"_s),
		$of($$str({basicPackageName, "BasicDesktopIconUI"_s})),
		$of("FileChooserUI"_s),
		$of($$str({basicPackageName, "BasicFileChooserUI"_s})),
		$of("OptionPaneUI"_s),
		$of($$str({basicPackageName, "BasicOptionPaneUI"_s})),
		$of("PanelUI"_s),
		$of($$str({basicPackageName, "BasicPanelUI"_s})),
		$of("ViewportUI"_s),
		$of($$str({basicPackageName, "BasicViewportUI"_s})),
		$of("RootPaneUI"_s),
		$of($$str({basicPackageName, "BasicRootPaneUI"_s}))
	}));
	$nc(table)->putDefaults(uiDefaults);
}

void BasicLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
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

void BasicLookAndFeel::loadSystemColors($UIDefaults* table, $StringArray* systemColors, bool useNative) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (useNative) {
		for (int32_t i = 0; i < $nc(systemColors)->length; i += 2) {
			$init($Color);
			$var($Color, color, $Color::black);
			try {
				$var($String, name, systemColors->get(i));
				$load($SystemColor);
				$assign(color, ($cast($Color, $nc($($SystemColor::class$->getField(name)))->get(nullptr))));
			} catch ($Exception& e) {
			}
			$nc(table)->put(systemColors->get(i), $$new($ColorUIResource, color));
		}
	} else {
		for (int32_t i = 0; i < $nc(systemColors)->length; i += 2) {
			$init($Color);
			$var($Color, color, $Color::black);
			try {
				$assign(color, $Color::decode(systemColors->get(i + 1)));
			} catch ($NumberFormatException& e) {
				e->printStackTrace();
			}
			$nc(table)->put(systemColors->get(i), $$new($ColorUIResource, color));
		}
	}
}

void BasicLookAndFeel::initResourceBundle($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$nc(table)->setDefaultLocale($($Locale::getDefault()));
	$nc($($SwingAccessor::getUIDefaultsAccessor()))->addInternalBundle(table, "com.sun.swing.internal.plaf.basic.resources.basic"_s);
}

void BasicLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	initResourceBundle(table);
	$var($Integer, fiveHundred, $Integer::valueOf(500));
	$var($Long, oneThousand, $Long::valueOf((int64_t)1000));
	$var($UIDefaults$LazyValue, dialogPlain12, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0)));
	$var($UIDefaults$LazyValue, serifPlain12, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1)));
	$var($UIDefaults$LazyValue, sansSerifPlain12, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2)));
	$var($UIDefaults$LazyValue, monospacedPlain12, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3)));
	$var($UIDefaults$LazyValue, dialogBold12, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4)));
	$init($Color);
	$var($ColorUIResource, red, $new($ColorUIResource, $Color::red));
	$var($ColorUIResource, black, $new($ColorUIResource, $Color::black));
	$var($ColorUIResource, white, $new($ColorUIResource, $Color::white));
	$var($ColorUIResource, yellow, $new($ColorUIResource, $Color::yellow));
	$var($ColorUIResource, gray, $new($ColorUIResource, $Color::gray));
	$var($ColorUIResource, lightGray, $new($ColorUIResource, $Color::lightGray));
	$var($ColorUIResource, darkGray, $new($ColorUIResource, $Color::darkGray));
	$var($ColorUIResource, scrollBarTrack, $new($ColorUIResource, 224, 224, 224));
	$var($Color, control, $nc(table)->getColor("control"_s));
	$var($Color, controlDkShadow, table->getColor("controlDkShadow"_s));
	$var($Color, controlHighlight, table->getColor("controlHighlight"_s));
	$var($Color, controlLtHighlight, table->getColor("controlLtHighlight"_s));
	$var($Color, controlShadow, table->getColor("controlShadow"_s));
	$var($Color, controlText, table->getColor("controlText"_s));
	$var($Color, menu, table->getColor("menu"_s));
	$var($Color, menuText, table->getColor("menuText"_s));
	$var($Color, textHighlight, table->getColor("textHighlight"_s));
	$var($Color, textHighlightText, table->getColor("textHighlightText"_s));
	$var($Color, textInactiveText, table->getColor("textInactiveText"_s));
	$var($Color, textText, table->getColor("textText"_s));
	$var($Color, window, table->getColor("window"_s));
	$var($InsetsUIResource, zeroInsets, $new($InsetsUIResource, 0, 0, 0, 0));
	$var($InsetsUIResource, twoInsets, $new($InsetsUIResource, 2, 2, 2, 2));
	$var($InsetsUIResource, threeInsets, $new($InsetsUIResource, 3, 3, 3, 3));
	$var($UIDefaults$LazyValue, marginBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5)));
	$var($UIDefaults$LazyValue, etchedBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6)));
	$var($UIDefaults$LazyValue, loweredBevelBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7)));
	$var($UIDefaults$LazyValue, popupMenuBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8)));
	$var($UIDefaults$LazyValue, blackLineBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9)));
	$var($UIDefaults$LazyValue, focusCellHighlightBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, yellow)));
	$var($Object, noFocusBorder, $new($BorderUIResource$EmptyBorderUIResource, 1, 1, 1, 1));
	$var($UIDefaults$LazyValue, tableHeaderBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, controlLtHighlight, control, controlDkShadow, controlShadow)));
	$var($UIDefaults$LazyValue, buttonBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12)));
	$var($UIDefaults$LazyValue, buttonToggleBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13)));
	$var($UIDefaults$LazyValue, radioButtonBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14)));
	$var($Object, newFolderIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/NewFolder.gif"_s));
	$var($Object, upFolderIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/UpFolder.gif"_s));
	$var($Object, homeFolderIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/HomeFolder.gif"_s));
	$var($Object, detailsViewIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/DetailsView.gif"_s));
	$var($Object, listViewIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/ListView.gif"_s));
	$var($Object, directoryIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Directory.gif"_s));
	$var($Object, fileIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/File.gif"_s));
	$var($Object, computerIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Computer.gif"_s));
	$var($Object, hardDriveIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/HardDrive.gif"_s));
	$var($Object, floppyDriveIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/FloppyDrive.gif"_s));
	$var($UIDefaults$LazyValue, internalFrameBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8)));
	$var($Object, listCellRendererActiveValue, $new($BasicLookAndFeel$2, this));
	$var($UIDefaults$LazyValue, menuBarBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15)));
	$var($UIDefaults$LazyValue, menuItemCheckIcon, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16)));
	$var($UIDefaults$LazyValue, menuItemArrowIcon, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17)));
	$var($UIDefaults$LazyValue, menuArrowIcon, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18)));
	$var($UIDefaults$LazyValue, checkBoxIcon, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19)));
	$var($UIDefaults$LazyValue, radioButtonIcon, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20)));
	$var($UIDefaults$LazyValue, checkBoxMenuItemIcon, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21)));
	$var($UIDefaults$LazyValue, radioButtonMenuItemIcon, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22)));
	$var($Object, menuItemAcceleratorDelimiter, "+"_s);
	$var($Object, optionPaneMinimumSize, $new($DimensionUIResource, 262, 90));
	int32_t zero = 0;
	$var($UIDefaults$LazyValue, zeroBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, zero)));
	int32_t ten = 10;
	$var($UIDefaults$LazyValue, optionPaneBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, ten)));
	$var($UIDefaults$LazyValue, optionPaneButtonAreaBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, zero)));
	$var($UIDefaults$LazyValue, progressBarBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26)));
	$var($Object, minimumThumbSize, $new($DimensionUIResource, 8, 8));
	$var($Object, maximumThumbSize, $new($DimensionUIResource, 4096, 4096));
	$var($Object, sliderFocusInsets, twoInsets);
	$var($Object, toolBarSeparatorSize, $new($DimensionUIResource, 10, 10));
	$var($UIDefaults$LazyValue, splitPaneBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27)));
	$var($UIDefaults$LazyValue, splitPaneDividerBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28)));
	$var($Object, tabbedPaneTabInsets, $new($InsetsUIResource, 0, 4, 1, 4));
	$var($Object, tabbedPaneTabPadInsets, $new($InsetsUIResource, 2, 2, 2, 1));
	$var($Object, tabbedPaneTabAreaInsets, $new($InsetsUIResource, 3, 2, 0, 2));
	$var($Object, tabbedPaneContentBorderInsets, $new($InsetsUIResource, 2, 2, 3, 3));
	$var($UIDefaults$LazyValue, textFieldBorder, static_cast<$UIDefaults$LazyValue*>($new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29)));
	$var($Object, editorMargin, threeInsets);
	$var($Object, caretBlinkRate, fiveHundred);
	$var($ObjectArray, allAuditoryCues, $new($ObjectArray, {
		$of("CheckBoxMenuItem.commandSound"_s),
		$of("InternalFrame.closeSound"_s),
		$of("InternalFrame.maximizeSound"_s),
		$of("InternalFrame.minimizeSound"_s),
		$of("InternalFrame.restoreDownSound"_s),
		$of("InternalFrame.restoreUpSound"_s),
		$of("MenuItem.commandSound"_s),
		$of("OptionPane.errorSound"_s),
		$of("OptionPane.informationSound"_s),
		$of("OptionPane.questionSound"_s),
		$of("OptionPane.warningSound"_s),
		$of("PopupMenu.popupSound"_s),
		$of("RadioButtonMenuItem.commandSound"_s)
	}));
	$var($ObjectArray, noAuditoryCues, $new($ObjectArray, {$of("mute"_s)}));
	$init($Boolean);
	$init($DefaultEditorKit);
	$init($JTextField);
	$var($ObjectArray, defaults, $new($ObjectArray, {
		$of("AuditoryCues.cueList"_s),
		$of(allAuditoryCues),
		$of("AuditoryCues.allAuditoryCues"_s),
		$of(allAuditoryCues),
		$of("AuditoryCues.noAuditoryCues"_s),
		$of(noAuditoryCues),
		$of("AuditoryCues.playList"_s),
		($Object*)nullptr,
		$of("Button.defaultButtonFollowsFocus"_s),
		$of($Boolean::TRUE),
		$of("Button.font"_s),
		$of(dialogPlain12),
		$of("Button.background"_s),
		$of(control),
		$of("Button.foreground"_s),
		$of(controlText),
		$of("Button.shadow"_s),
		$of(controlShadow),
		$of("Button.darkShadow"_s),
		$of(controlDkShadow),
		$of("Button.light"_s),
		$of(controlHighlight),
		$of("Button.highlight"_s),
		$of(controlLtHighlight),
		$of("Button.border"_s),
		$of(buttonBorder),
		$of("Button.margin"_s),
		$of($$new($InsetsUIResource, 2, 14, 2, 14)),
		$of("Button.textIconGap"_s),
		$($of($Integer::valueOf(4))),
		$of("Button.textShiftOffset"_s),
		$($of($Integer::valueOf(zero))),
		$of("Button.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s),
			$of("ENTER"_s),
			$of("pressed"_s),
			$of("released ENTER"_s),
			$of("released"_s)
		}))),
		$of("ToggleButton.font"_s),
		$of(dialogPlain12),
		$of("ToggleButton.background"_s),
		$of(control),
		$of("ToggleButton.foreground"_s),
		$of(controlText),
		$of("ToggleButton.shadow"_s),
		$of(controlShadow),
		$of("ToggleButton.darkShadow"_s),
		$of(controlDkShadow),
		$of("ToggleButton.light"_s),
		$of(controlHighlight),
		$of("ToggleButton.highlight"_s),
		$of(controlLtHighlight),
		$of("ToggleButton.border"_s),
		$of(buttonToggleBorder),
		$of("ToggleButton.margin"_s),
		$of($$new($InsetsUIResource, 2, 14, 2, 14)),
		$of("ToggleButton.textIconGap"_s),
		$($of($Integer::valueOf(4))),
		$of("ToggleButton.textShiftOffset"_s),
		$($of($Integer::valueOf(zero))),
		$of("ToggleButton.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("RadioButton.font"_s),
		$of(dialogPlain12),
		$of("RadioButton.background"_s),
		$of(control),
		$of("RadioButton.foreground"_s),
		$of(controlText),
		$of("RadioButton.shadow"_s),
		$of(controlShadow),
		$of("RadioButton.darkShadow"_s),
		$of(controlDkShadow),
		$of("RadioButton.light"_s),
		$of(controlHighlight),
		$of("RadioButton.highlight"_s),
		$of(controlLtHighlight),
		$of("RadioButton.border"_s),
		$of(radioButtonBorder),
		$of("RadioButton.margin"_s),
		$of(twoInsets),
		$of("RadioButton.textIconGap"_s),
		$($of($Integer::valueOf(4))),
		$of("RadioButton.textShiftOffset"_s),
		$($of($Integer::valueOf(zero))),
		$of("RadioButton.icon"_s),
		$of(radioButtonIcon),
		$of("RadioButton.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s),
			$of("RETURN"_s),
			$of("pressed"_s)
		}))),
		$of("CheckBox.font"_s),
		$of(dialogPlain12),
		$of("CheckBox.background"_s),
		$of(control),
		$of("CheckBox.foreground"_s),
		$of(controlText),
		$of("CheckBox.border"_s),
		$of(radioButtonBorder),
		$of("CheckBox.margin"_s),
		$of(twoInsets),
		$of("CheckBox.textIconGap"_s),
		$($of($Integer::valueOf(4))),
		$of("CheckBox.textShiftOffset"_s),
		$($of($Integer::valueOf(zero))),
		$of("CheckBox.icon"_s),
		$of(checkBoxIcon),
		$of("CheckBox.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("FileChooser.useSystemExtensionHiding"_s),
		$of($Boolean::FALSE),
		$of("ColorChooser.font"_s),
		$of(dialogPlain12),
		$of("ColorChooser.background"_s),
		$of(control),
		$of("ColorChooser.foreground"_s),
		$of(controlText),
		$of("ColorChooser.swatchesSwatchSize"_s),
		$of($$new($Dimension, 10, 10)),
		$of("ColorChooser.swatchesRecentSwatchSize"_s),
		$of($$new($Dimension, 10, 10)),
		$of("ColorChooser.swatchesDefaultRecentColor"_s),
		$of(control),
		$of("ComboBox.font"_s),
		$of(sansSerifPlain12),
		$of("ComboBox.background"_s),
		$of(window),
		$of("ComboBox.foreground"_s),
		$of(textText),
		$of("ComboBox.buttonBackground"_s),
		$of(control),
		$of("ComboBox.buttonShadow"_s),
		$of(controlShadow),
		$of("ComboBox.buttonDarkShadow"_s),
		$of(controlDkShadow),
		$of("ComboBox.buttonHighlight"_s),
		$of(controlLtHighlight),
		$of("ComboBox.selectionBackground"_s),
		$of(textHighlight),
		$of("ComboBox.selectionForeground"_s),
		$of(textHighlightText),
		$of("ComboBox.disabledBackground"_s),
		$of(control),
		$of("ComboBox.disabledForeground"_s),
		$of(textInactiveText),
		$of("ComboBox.timeFactor"_s),
		$of(oneThousand),
		$of("ComboBox.isEnterSelectablePopup"_s),
		$of($Boolean::FALSE),
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
			$of("ENTER"_s),
			$of("enterPressed"_s)
		}))),
		$of("ComboBox.noActionOnKeyNavigation"_s),
		$of($Boolean::FALSE),
		$of("FileChooser.newFolderIcon"_s),
		newFolderIcon,
		$of("FileChooser.upFolderIcon"_s),
		upFolderIcon,
		$of("FileChooser.homeFolderIcon"_s),
		homeFolderIcon,
		$of("FileChooser.detailsViewIcon"_s),
		detailsViewIcon,
		$of("FileChooser.listViewIcon"_s),
		listViewIcon,
		$of("FileChooser.readOnly"_s),
		$of($Boolean::FALSE),
		$of("FileChooser.usesSingleFilePane"_s),
		$of($Boolean::FALSE),
		$of("FileChooser.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("cancelSelection"_s),
			$of("F5"_s),
			$of("refresh"_s)
		}))),
		$of("FileView.directoryIcon"_s),
		directoryIcon,
		$of("FileView.fileIcon"_s),
		fileIcon,
		$of("FileView.computerIcon"_s),
		computerIcon,
		$of("FileView.hardDriveIcon"_s),
		hardDriveIcon,
		$of("FileView.floppyDriveIcon"_s),
		floppyDriveIcon,
		$of("InternalFrame.titleFont"_s),
		$of(dialogBold12),
		$of("InternalFrame.borderColor"_s),
		$of(control),
		$of("InternalFrame.borderShadow"_s),
		$of(controlShadow),
		$of("InternalFrame.borderDarkShadow"_s),
		$of(controlDkShadow),
		$of("InternalFrame.borderHighlight"_s),
		$of(controlLtHighlight),
		$of("InternalFrame.borderLight"_s),
		$of(controlHighlight),
		$of("InternalFrame.border"_s),
		$of(internalFrameBorder),
		$of("InternalFrame.icon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/JavaCup16.png"_s)),
		$of("InternalFrame.maximizeIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30)),
		$of("InternalFrame.minimizeIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30)),
		$of("InternalFrame.iconifyIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30)),
		$of("InternalFrame.closeIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30)),
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
		$(table->get("activeCaption"_s)),
		$of("InternalFrame.activeTitleForeground"_s),
		$(table->get("activeCaptionText"_s)),
		$of("InternalFrame.inactiveTitleBackground"_s),
		$(table->get("inactiveCaption"_s)),
		$of("InternalFrame.inactiveTitleForeground"_s),
		$(table->get("inactiveCaptionText"_s)),
		$of("InternalFrame.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("shift ESCAPE"_s),
			$of("showSystemMenu"_s),
			$of("ctrl SPACE"_s),
			$of("showSystemMenu"_s),
			$of("ESCAPE"_s),
			$of("hideSystemMenu"_s)
		})),
		$of("InternalFrameTitlePane.iconifyButtonOpacity"_s),
		$of($Boolean::TRUE),
		$of("InternalFrameTitlePane.maximizeButtonOpacity"_s),
		$of($Boolean::TRUE),
		$of("InternalFrameTitlePane.closeButtonOpacity"_s),
		$of($Boolean::TRUE),
		$of("DesktopIcon.border"_s),
		$of(internalFrameBorder),
		$of("Desktop.minOnScreenInsets"_s),
		$of(threeInsets),
		$of("Desktop.background"_s),
		$(table->get("desktop"_s)),
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
		$of("Label.font"_s),
		$of(dialogPlain12),
		$of("Label.background"_s),
		$of(control),
		$of("Label.foreground"_s),
		$of(controlText),
		$of("Label.disabledForeground"_s),
		$of(white),
		$of("Label.disabledShadow"_s),
		$of(controlShadow),
		$of("Label.border"_s),
		($Object*)nullptr,
		$of("List.font"_s),
		$of(dialogPlain12),
		$of("List.background"_s),
		$of(window),
		$of("List.foreground"_s),
		$of(textText),
		$of("List.selectionBackground"_s),
		$of(textHighlight),
		$of("List.selectionForeground"_s),
		$of(textHighlightText),
		$of("List.noFocusBorder"_s),
		noFocusBorder,
		$of("List.focusCellHighlightBorder"_s),
		$of(focusCellHighlightBorder),
		$of("List.dropLineColor"_s),
		$of(controlShadow),
		$of("List.border"_s),
		($Object*)nullptr,
		$of("List.cellRenderer"_s),
		listCellRendererActiveValue,
		$of("List.timeFactor"_s),
		$of(oneThousand),
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
		$of("List.focusInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("LEFT"_s),
			$of("selectNextColumn"_s),
			$of("KP_LEFT"_s),
			$of("selectNextColumn"_s),
			$of("shift LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("shift KP_LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift KP_LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl LEFT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("ctrl KP_LEFT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("RIGHT"_s),
			$of("selectPreviousColumn"_s),
			$of("KP_RIGHT"_s),
			$of("selectPreviousColumn"_s),
			$of("shift RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("shift KP_RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift KP_RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl RIGHT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("ctrl KP_RIGHT"_s),
			$of("selectPreviousColumnChangeLead"_s)
		}))),
		$of("MenuBar.font"_s),
		$of(dialogPlain12),
		$of("MenuBar.background"_s),
		$of(menu),
		$of("MenuBar.foreground"_s),
		$of(menuText),
		$of("MenuBar.shadow"_s),
		$of(controlShadow),
		$of("MenuBar.highlight"_s),
		$of(controlLtHighlight),
		$of("MenuBar.border"_s),
		$of(menuBarBorder),
		$of("MenuBar.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("F10"_s),
			$of("takeFocus"_s)
		})),
		$of("MenuItem.font"_s),
		$of(dialogPlain12),
		$of("MenuItem.acceleratorFont"_s),
		$of(dialogPlain12),
		$of("MenuItem.background"_s),
		$of(menu),
		$of("MenuItem.foreground"_s),
		$of(menuText),
		$of("MenuItem.selectionForeground"_s),
		$of(textHighlightText),
		$of("MenuItem.selectionBackground"_s),
		$of(textHighlight),
		$of("MenuItem.disabledForeground"_s),
		($Object*)nullptr,
		$of("MenuItem.acceleratorForeground"_s),
		$of(menuText),
		$of("MenuItem.acceleratorSelectionForeground"_s),
		$of(textHighlightText),
		$of("MenuItem.acceleratorDelimiter"_s),
		menuItemAcceleratorDelimiter,
		$of("MenuItem.border"_s),
		$of(marginBorder),
		$of("MenuItem.borderPainted"_s),
		$of($Boolean::FALSE),
		$of("MenuItem.margin"_s),
		$of(twoInsets),
		$of("MenuItem.checkIcon"_s),
		$of(menuItemCheckIcon),
		$of("MenuItem.arrowIcon"_s),
		$of(menuItemArrowIcon),
		$of("MenuItem.commandSound"_s),
		($Object*)nullptr,
		$of("RadioButtonMenuItem.font"_s),
		$of(dialogPlain12),
		$of("RadioButtonMenuItem.acceleratorFont"_s),
		$of(dialogPlain12),
		$of("RadioButtonMenuItem.background"_s),
		$of(menu),
		$of("RadioButtonMenuItem.foreground"_s),
		$of(menuText),
		$of("RadioButtonMenuItem.selectionForeground"_s),
		$of(textHighlightText),
		$of("RadioButtonMenuItem.selectionBackground"_s),
		$of(textHighlight),
		$of("RadioButtonMenuItem.disabledForeground"_s),
		($Object*)nullptr,
		$of("RadioButtonMenuItem.acceleratorForeground"_s),
		$of(menuText),
		$of("RadioButtonMenuItem.acceleratorSelectionForeground"_s),
		$of(textHighlightText),
		$of("RadioButtonMenuItem.border"_s),
		$of(marginBorder),
		$of("RadioButtonMenuItem.borderPainted"_s),
		$of($Boolean::FALSE),
		$of("RadioButtonMenuItem.margin"_s),
		$of(twoInsets),
		$of("RadioButtonMenuItem.checkIcon"_s),
		$of(radioButtonMenuItemIcon),
		$of("RadioButtonMenuItem.arrowIcon"_s),
		$of(menuItemArrowIcon),
		$of("RadioButtonMenuItem.commandSound"_s),
		($Object*)nullptr,
		$of("CheckBoxMenuItem.font"_s),
		$of(dialogPlain12),
		$of("CheckBoxMenuItem.acceleratorFont"_s),
		$of(dialogPlain12),
		$of("CheckBoxMenuItem.background"_s),
		$of(menu),
		$of("CheckBoxMenuItem.foreground"_s),
		$of(menuText),
		$of("CheckBoxMenuItem.selectionForeground"_s),
		$of(textHighlightText),
		$of("CheckBoxMenuItem.selectionBackground"_s),
		$of(textHighlight),
		$of("CheckBoxMenuItem.disabledForeground"_s),
		($Object*)nullptr,
		$of("CheckBoxMenuItem.acceleratorForeground"_s),
		$of(menuText),
		$of("CheckBoxMenuItem.acceleratorSelectionForeground"_s),
		$of(textHighlightText),
		$of("CheckBoxMenuItem.border"_s),
		$of(marginBorder),
		$of("CheckBoxMenuItem.borderPainted"_s),
		$of($Boolean::FALSE),
		$of("CheckBoxMenuItem.margin"_s),
		$of(twoInsets),
		$of("CheckBoxMenuItem.checkIcon"_s),
		$of(checkBoxMenuItemIcon),
		$of("CheckBoxMenuItem.arrowIcon"_s),
		$of(menuItemArrowIcon),
		$of("CheckBoxMenuItem.commandSound"_s),
		($Object*)nullptr,
		$of("Menu.font"_s),
		$of(dialogPlain12),
		$of("Menu.acceleratorFont"_s),
		$of(dialogPlain12),
		$of("Menu.background"_s),
		$of(menu),
		$of("Menu.foreground"_s),
		$of(menuText),
		$of("Menu.selectionForeground"_s),
		$of(textHighlightText),
		$of("Menu.selectionBackground"_s),
		$of(textHighlight),
		$of("Menu.disabledForeground"_s),
		($Object*)nullptr,
		$of("Menu.acceleratorForeground"_s),
		$of(menuText),
		$of("Menu.acceleratorSelectionForeground"_s),
		$of(textHighlightText),
		$of("Menu.border"_s),
		$of(marginBorder),
		$of("Menu.borderPainted"_s),
		$of($Boolean::FALSE),
		$of("Menu.margin"_s),
		$of(twoInsets),
		$of("Menu.checkIcon"_s),
		$of(menuItemCheckIcon),
		$of("Menu.arrowIcon"_s),
		$of(menuArrowIcon),
		$of("Menu.menuPopupOffsetX"_s),
		$($of($Integer::valueOf(0))),
		$of("Menu.menuPopupOffsetY"_s),
		$($of($Integer::valueOf(0))),
		$of("Menu.submenuPopupOffsetX"_s),
		$($of($Integer::valueOf(0))),
		$of("Menu.submenuPopupOffsetY"_s),
		$($of($Integer::valueOf(0))),
		$of("Menu.shortcutKeys"_s),
		$of($$new($ints, {
			$SwingUtilities2::getSystemMnemonicKeyMask(),
			$SwingUtilities2::setAltGraphMask($SwingUtilities2::getSystemMnemonicKeyMask())
		})),
		$of("Menu.crossMenuMnemonic"_s),
		$of($Boolean::TRUE),
		$of("Menu.cancelMode"_s),
		$of("hideLastSubmenu"_s),
		$of("Menu.preserveTopLevelSelection"_s),
		$of($Boolean::FALSE),
		$of("PopupMenu.font"_s),
		$of(dialogPlain12),
		$of("PopupMenu.background"_s),
		$of(menu),
		$of("PopupMenu.foreground"_s),
		$of(menuText),
		$of("PopupMenu.border"_s),
		$of(popupMenuBorder),
		$of("PopupMenu.popupSound"_s),
		($Object*)nullptr,
		$of("PopupMenu.selectedWindowInputMapBindings"_s),
		$of($$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("cancel"_s),
			$of("DOWN"_s),
			$of("selectNext"_s),
			$of("KP_DOWN"_s),
			$of("selectNext"_s),
			$of("UP"_s),
			$of("selectPrevious"_s),
			$of("KP_UP"_s),
			$of("selectPrevious"_s),
			$of("LEFT"_s),
			$of("selectParent"_s),
			$of("KP_LEFT"_s),
			$of("selectParent"_s),
			$of("RIGHT"_s),
			$of("selectChild"_s),
			$of("KP_RIGHT"_s),
			$of("selectChild"_s),
			$of("ENTER"_s),
			$of("return"_s),
			$of("ctrl ENTER"_s),
			$of("return"_s),
			$of("SPACE"_s),
			$of("return"_s)
		})),
		$of("PopupMenu.selectedWindowInputMapBindings.RightToLeft"_s),
		$of($$new($ObjectArray, {
			$of("LEFT"_s),
			$of("selectChild"_s),
			$of("KP_LEFT"_s),
			$of("selectChild"_s),
			$of("RIGHT"_s),
			$of("selectParent"_s),
			$of("KP_RIGHT"_s),
			$of("selectParent"_s)
		})),
		$of("PopupMenu.consumeEventOnClose"_s),
		$of($Boolean::FALSE),
		$of("OptionPane.font"_s),
		$of(dialogPlain12),
		$of("OptionPane.background"_s),
		$of(control),
		$of("OptionPane.foreground"_s),
		$of(controlText),
		$of("OptionPane.messageForeground"_s),
		$of(controlText),
		$of("OptionPane.border"_s),
		$of(optionPaneBorder),
		$of("OptionPane.messageAreaBorder"_s),
		$of(zeroBorder),
		$of("OptionPane.buttonAreaBorder"_s),
		$of(optionPaneButtonAreaBorder),
		$of("OptionPane.minimumSize"_s),
		optionPaneMinimumSize,
		$of("OptionPane.errorIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Error.gif"_s)),
		$of("OptionPane.informationIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Inform.gif"_s)),
		$of("OptionPane.warningIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Warn.gif"_s)),
		$of("OptionPane.questionIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Question.gif"_s)),
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
		$of(fiveHundred),
		$of("Panel.font"_s),
		$of(dialogPlain12),
		$of("Panel.background"_s),
		$of(control),
		$of("Panel.foreground"_s),
		$of(textText),
		$of("ProgressBar.font"_s),
		$of(dialogPlain12),
		$of("ProgressBar.foreground"_s),
		$of(textHighlight),
		$of("ProgressBar.background"_s),
		$of(control),
		$of("ProgressBar.selectionForeground"_s),
		$of(control),
		$of("ProgressBar.selectionBackground"_s),
		$of(textHighlight),
		$of("ProgressBar.border"_s),
		$of(progressBarBorder),
		$of("ProgressBar.cellLength"_s),
		$($of($Integer::valueOf(1))),
		$of("ProgressBar.cellSpacing"_s),
		$($of($Integer::valueOf(zero))),
		$of("ProgressBar.repaintInterval"_s),
		$($of($Integer::valueOf(50))),
		$of("ProgressBar.cycleTime"_s),
		$($of($Integer::valueOf(3000))),
		$of("ProgressBar.horizontalSize"_s),
		$of($$new($DimensionUIResource, 146, 12)),
		$of("ProgressBar.verticalSize"_s),
		$of($$new($DimensionUIResource, 12, 146)),
		$of("Separator.shadow"_s),
		$of(controlShadow),
		$of("Separator.highlight"_s),
		$of(controlLtHighlight),
		$of("Separator.background"_s),
		$of(controlLtHighlight),
		$of("Separator.foreground"_s),
		$of(controlShadow),
		$of("ScrollBar.background"_s),
		$of(scrollBarTrack),
		$of("ScrollBar.foreground"_s),
		$of(control),
		$of("ScrollBar.track"_s),
		$(table->get("scrollbar"_s)),
		$of("ScrollBar.trackHighlight"_s),
		$of(controlDkShadow),
		$of("ScrollBar.thumb"_s),
		$of(control),
		$of("ScrollBar.thumbHighlight"_s),
		$of(controlLtHighlight),
		$of("ScrollBar.thumbDarkShadow"_s),
		$of(controlDkShadow),
		$of("ScrollBar.thumbShadow"_s),
		$of(controlShadow),
		$of("ScrollBar.border"_s),
		($Object*)nullptr,
		$of("ScrollBar.minimumThumbSize"_s),
		minimumThumbSize,
		$of("ScrollBar.maximumThumbSize"_s),
		maximumThumbSize,
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
		$of("ScrollBar.ancestorInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_RIGHT"_s),
			$of("negativeUnitIncrement"_s),
			$of("LEFT"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_LEFT"_s),
			$of("positiveUnitIncrement"_s)
		}))),
		$of("ScrollBar.width"_s),
		$($of($Integer::valueOf(16))),
		$of("ScrollPane.font"_s),
		$of(dialogPlain12),
		$of("ScrollPane.background"_s),
		$of(control),
		$of("ScrollPane.foreground"_s),
		$of(controlText),
		$of("ScrollPane.border"_s),
		$of(textFieldBorder),
		$of("ScrollPane.viewportBorder"_s),
		($Object*)nullptr,
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
		$of("ScrollPane.ancestorInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl PAGE_UP"_s),
			$of("scrollRight"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollLeft"_s)
		}))),
		$of("Viewport.font"_s),
		$of(dialogPlain12),
		$of("Viewport.background"_s),
		$of(control),
		$of("Viewport.foreground"_s),
		$of(textText),
		$of("Slider.font"_s),
		$of(dialogPlain12),
		$of("Slider.foreground"_s),
		$of(control),
		$of("Slider.background"_s),
		$of(control),
		$of("Slider.highlight"_s),
		$of(controlLtHighlight),
		$of("Slider.tickColor"_s),
		$of($Color::black),
		$of("Slider.shadow"_s),
		$of(controlShadow),
		$of("Slider.focus"_s),
		$of(controlDkShadow),
		$of("Slider.border"_s),
		($Object*)nullptr,
		$of("Slider.horizontalSize"_s),
		$of($$new($Dimension, 200, 21)),
		$of("Slider.verticalSize"_s),
		$of($$new($Dimension, 21, 200)),
		$of("Slider.minimumHorizontalSize"_s),
		$of($$new($Dimension, 36, 21)),
		$of("Slider.minimumVerticalSize"_s),
		$of($$new($Dimension, 21, 36)),
		$of("Slider.focusInsets"_s),
		sliderFocusInsets,
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
		$of("Slider.focusInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_RIGHT"_s),
			$of("negativeUnitIncrement"_s),
			$of("LEFT"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_LEFT"_s),
			$of("positiveUnitIncrement"_s)
		}))),
		$of("Slider.onlyLeftMouseButtonDrag"_s),
		$of($Boolean::TRUE),
		$of("Spinner.font"_s),
		$of(monospacedPlain12),
		$of("Spinner.background"_s),
		$of(control),
		$of("Spinner.foreground"_s),
		$of(control),
		$of("Spinner.border"_s),
		$of(textFieldBorder),
		$of("Spinner.arrowButtonBorder"_s),
		($Object*)nullptr,
		$of("Spinner.arrowButtonInsets"_s),
		($Object*)nullptr,
		$of("Spinner.arrowButtonSize"_s),
		$of($$new($Dimension, 16, 5)),
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
		$of("Spinner.editorBorderPainted"_s),
		$of($Boolean::FALSE),
		$of("Spinner.editorAlignment"_s),
		$($of($Integer::valueOf($JTextField::TRAILING))),
		$of("SplitPane.background"_s),
		$of(control),
		$of("SplitPane.highlight"_s),
		$of(controlLtHighlight),
		$of("SplitPane.shadow"_s),
		$of(controlShadow),
		$of("SplitPane.darkShadow"_s),
		$of(controlDkShadow),
		$of("SplitPane.border"_s),
		$of(splitPaneBorder),
		$of("SplitPane.dividerSize"_s),
		$($of($Integer::valueOf(7))),
		$of("SplitPaneDivider.border"_s),
		$of(splitPaneDividerBorder),
		$of("SplitPaneDivider.draggingColor"_s),
		$of(darkGray),
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
		$of("TabbedPane.font"_s),
		$of(dialogPlain12),
		$of("TabbedPane.background"_s),
		$of(control),
		$of("TabbedPane.foreground"_s),
		$of(controlText),
		$of("TabbedPane.highlight"_s),
		$of(controlLtHighlight),
		$of("TabbedPane.light"_s),
		$of(controlHighlight),
		$of("TabbedPane.shadow"_s),
		$of(controlShadow),
		$of("TabbedPane.darkShadow"_s),
		$of(controlDkShadow),
		$of("TabbedPane.selected"_s),
		($Object*)nullptr,
		$of("TabbedPane.focus"_s),
		$of(controlText),
		$of("TabbedPane.textIconGap"_s),
		$($of($Integer::valueOf(4))),
		$of("TabbedPane.tabsOverlapBorder"_s),
		$of($Boolean::FALSE),
		$of("TabbedPane.selectionFollowsFocus"_s),
		$of($Boolean::TRUE),
		$of("TabbedPane.labelShift"_s),
		$($of($Integer::valueOf(1))),
		$of("TabbedPane.selectedLabelShift"_s),
		$($of($Integer::valueOf(-1))),
		$of("TabbedPane.tabInsets"_s),
		tabbedPaneTabInsets,
		$of("TabbedPane.selectedTabPadInsets"_s),
		tabbedPaneTabPadInsets,
		$of("TabbedPane.tabAreaInsets"_s),
		tabbedPaneTabAreaInsets,
		$of("TabbedPane.contentBorderInsets"_s),
		tabbedPaneContentBorderInsets,
		$of("TabbedPane.tabRunOverlay"_s),
		$($of($Integer::valueOf(2))),
		$of("TabbedPane.tabsOpaque"_s),
		$of($Boolean::TRUE),
		$of("TabbedPane.contentOpaque"_s),
		$of($Boolean::TRUE),
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
		$of(dialogPlain12),
		$of("Table.foreground"_s),
		$of(controlText),
		$of("Table.background"_s),
		$of(window),
		$of("Table.selectionForeground"_s),
		$of(textHighlightText),
		$of("Table.selectionBackground"_s),
		$of(textHighlight),
		$of("Table.dropLineColor"_s),
		$of(controlShadow),
		$of("Table.dropLineShortColor"_s),
		$of(black),
		$of("Table.gridColor"_s),
		$of(gray),
		$of("Table.focusCellBackground"_s),
		$of(window),
		$of("Table.focusCellForeground"_s),
		$of(controlText),
		$of("Table.focusCellHighlightBorder"_s),
		$of(focusCellHighlightBorder),
		$of("Table.scrollPaneBorder"_s),
		$of(loweredBevelBorder),
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
		$of("Table.ancestorInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("selectPreviousColumn"_s),
			$of("KP_RIGHT"_s),
			$of("selectPreviousColumn"_s),
			$of("shift RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("shift KP_RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift KP_RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl RIGHT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("ctrl KP_RIGHT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("LEFT"_s),
			$of("selectNextColumn"_s),
			$of("KP_LEFT"_s),
			$of("selectNextColumn"_s),
			$of("shift LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("shift KP_LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift KP_LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl LEFT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("ctrl KP_LEFT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("ctrl PAGE_UP"_s),
			$of("scrollRightChangeSelection"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollLeftChangeSelection"_s),
			$of("ctrl shift PAGE_UP"_s),
			$of("scrollRightExtendSelection"_s),
			$of("ctrl shift PAGE_DOWN"_s),
			$of("scrollLeftExtendSelection"_s)
		}))),
		$of("Table.ascendingSortIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31)),
		$of("Table.descendingSortIcon"_s),
		static_cast<$UIDefaults$LazyValue*>($$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32)),
		$of("Table.sortIconColor"_s),
		$of(controlShadow),
		$of("TableHeader.font"_s),
		$of(dialogPlain12),
		$of("TableHeader.foreground"_s),
		$of(controlText),
		$of("TableHeader.background"_s),
		$of(control),
		$of("TableHeader.cellBorder"_s),
		$of(tableHeaderBorder),
		$of("TableHeader.focusCellBackground"_s),
		$($of(table->getColor("text"_s))),
		$of("TableHeader.focusCellForeground"_s),
		($Object*)nullptr,
		$of("TableHeader.focusCellBorder"_s),
		($Object*)nullptr,
		$of("TableHeader.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("toggleSortOrder"_s),
			$of("LEFT"_s),
			$of("selectColumnToLeft"_s),
			$of("KP_LEFT"_s),
			$of("selectColumnToLeft"_s),
			$of("RIGHT"_s),
			$of("selectColumnToRight"_s),
			$of("KP_RIGHT"_s),
			$of("selectColumnToRight"_s),
			$of("alt LEFT"_s),
			$of("moveColumnLeft"_s),
			$of("alt KP_LEFT"_s),
			$of("moveColumnLeft"_s),
			$of("alt RIGHT"_s),
			$of("moveColumnRight"_s),
			$of("alt KP_RIGHT"_s),
			$of("moveColumnRight"_s),
			$of("alt shift LEFT"_s),
			$of("resizeLeft"_s),
			$of("alt shift KP_LEFT"_s),
			$of("resizeLeft"_s),
			$of("alt shift RIGHT"_s),
			$of("resizeRight"_s),
			$of("alt shift KP_RIGHT"_s),
			$of("resizeRight"_s),
			$of("ESCAPE"_s),
			$of("focusTable"_s)
		}))),
		$of("TextField.font"_s),
		$of(sansSerifPlain12),
		$of("TextField.background"_s),
		$of(window),
		$of("TextField.foreground"_s),
		$of(textText),
		$of("TextField.shadow"_s),
		$of(controlShadow),
		$of("TextField.darkShadow"_s),
		$of(controlDkShadow),
		$of("TextField.light"_s),
		$of(controlHighlight),
		$of("TextField.highlight"_s),
		$of(controlLtHighlight),
		$of("TextField.inactiveForeground"_s),
		$of(textInactiveText),
		$of("TextField.inactiveBackground"_s),
		$of(control),
		$of("TextField.selectionBackground"_s),
		$of(textHighlight),
		$of("TextField.selectionForeground"_s),
		$of(textHighlightText),
		$of("TextField.caretForeground"_s),
		$of(textText),
		$of("TextField.caretBlinkRate"_s),
		caretBlinkRate,
		$of("TextField.border"_s),
		$of(textFieldBorder),
		$of("TextField.margin"_s),
		$of(zeroInsets),
		$of("FormattedTextField.font"_s),
		$of(sansSerifPlain12),
		$of("FormattedTextField.background"_s),
		$of(window),
		$of("FormattedTextField.foreground"_s),
		$of(textText),
		$of("FormattedTextField.inactiveForeground"_s),
		$of(textInactiveText),
		$of("FormattedTextField.inactiveBackground"_s),
		$of(control),
		$of("FormattedTextField.selectionBackground"_s),
		$of(textHighlight),
		$of("FormattedTextField.selectionForeground"_s),
		$of(textHighlightText),
		$of("FormattedTextField.caretForeground"_s),
		$of(textText),
		$of("FormattedTextField.caretBlinkRate"_s),
		caretBlinkRate,
		$of("FormattedTextField.border"_s),
		$of(textFieldBorder),
		$of("FormattedTextField.margin"_s),
		$of(zeroInsets),
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
		$of("PasswordField.font"_s),
		$of(monospacedPlain12),
		$of("PasswordField.background"_s),
		$of(window),
		$of("PasswordField.foreground"_s),
		$of(textText),
		$of("PasswordField.inactiveForeground"_s),
		$of(textInactiveText),
		$of("PasswordField.inactiveBackground"_s),
		$of(control),
		$of("PasswordField.selectionBackground"_s),
		$of(textHighlight),
		$of("PasswordField.selectionForeground"_s),
		$of(textHighlightText),
		$of("PasswordField.caretForeground"_s),
		$of(textText),
		$of("PasswordField.caretBlinkRate"_s),
		caretBlinkRate,
		$of("PasswordField.border"_s),
		$of(textFieldBorder),
		$of("PasswordField.margin"_s),
		$of(zeroInsets),
		$of("PasswordField.echoChar"_s),
		$($of($Character::valueOf(u'*'))),
		$of("TextArea.font"_s),
		$of(monospacedPlain12),
		$of("TextArea.background"_s),
		$of(window),
		$of("TextArea.foreground"_s),
		$of(textText),
		$of("TextArea.inactiveForeground"_s),
		$of(textInactiveText),
		$of("TextArea.selectionBackground"_s),
		$of(textHighlight),
		$of("TextArea.selectionForeground"_s),
		$of(textHighlightText),
		$of("TextArea.caretForeground"_s),
		$of(textText),
		$of("TextArea.caretBlinkRate"_s),
		caretBlinkRate,
		$of("TextArea.border"_s),
		$of(marginBorder),
		$of("TextArea.margin"_s),
		$of(zeroInsets),
		$of("TextPane.font"_s),
		$of(serifPlain12),
		$of("TextPane.background"_s),
		$of(white),
		$of("TextPane.foreground"_s),
		$of(textText),
		$of("TextPane.selectionBackground"_s),
		$of(textHighlight),
		$of("TextPane.selectionForeground"_s),
		$of(textHighlightText),
		$of("TextPane.caretForeground"_s),
		$of(textText),
		$of("TextPane.caretBlinkRate"_s),
		caretBlinkRate,
		$of("TextPane.inactiveForeground"_s),
		$of(textInactiveText),
		$of("TextPane.border"_s),
		$of(marginBorder),
		$of("TextPane.margin"_s),
		editorMargin,
		$of("EditorPane.font"_s),
		$of(serifPlain12),
		$of("EditorPane.background"_s),
		$of(white),
		$of("EditorPane.foreground"_s),
		$of(textText),
		$of("EditorPane.selectionBackground"_s),
		$of(textHighlight),
		$of("EditorPane.selectionForeground"_s),
		$of(textHighlightText),
		$of("EditorPane.caretForeground"_s),
		$of(textText),
		$of("EditorPane.caretBlinkRate"_s),
		caretBlinkRate,
		$of("EditorPane.inactiveForeground"_s),
		$of(textInactiveText),
		$of("EditorPane.border"_s),
		$of(marginBorder),
		$of("EditorPane.margin"_s),
		editorMargin,
		$of("html.pendingImage"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/image-delayed.png"_s)),
		$of("html.missingImage"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/image-failed.png"_s)),
		$of("TitledBorder.font"_s),
		$of(dialogPlain12),
		$of("TitledBorder.titleColor"_s),
		$of(controlText),
		$of("TitledBorder.border"_s),
		$of(etchedBorder),
		$of("ToolBar.font"_s),
		$of(dialogPlain12),
		$of("ToolBar.background"_s),
		$of(control),
		$of("ToolBar.foreground"_s),
		$of(controlText),
		$of("ToolBar.shadow"_s),
		$of(controlShadow),
		$of("ToolBar.darkShadow"_s),
		$of(controlDkShadow),
		$of("ToolBar.light"_s),
		$of(controlHighlight),
		$of("ToolBar.highlight"_s),
		$of(controlLtHighlight),
		$of("ToolBar.dockingBackground"_s),
		$of(control),
		$of("ToolBar.dockingForeground"_s),
		$of(red),
		$of("ToolBar.floatingBackground"_s),
		$of(control),
		$of("ToolBar.floatingForeground"_s),
		$of(darkGray),
		$of("ToolBar.border"_s),
		$of(etchedBorder),
		$of("ToolBar.separatorSize"_s),
		toolBarSeparatorSize,
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
		$of("ToolTip.font"_s),
		$of(sansSerifPlain12),
		$of("ToolTip.background"_s),
		$(table->get("info"_s)),
		$of("ToolTip.foreground"_s),
		$(table->get("infoText"_s)),
		$of("ToolTip.border"_s),
		$of(blackLineBorder),
		$of("ToolTipManager.enableToolTipMode"_s),
		$of("allWindows"_s),
		$of("Tree.paintLines"_s),
		$of($Boolean::TRUE),
		$of("Tree.lineTypeDashed"_s),
		$of($Boolean::FALSE),
		$of("Tree.font"_s),
		$of(dialogPlain12),
		$of("Tree.background"_s),
		$of(window),
		$of("Tree.foreground"_s),
		$of(textText),
		$of("Tree.hash"_s),
		$of(gray),
		$of("Tree.textForeground"_s),
		$of(textText),
		$of("Tree.textBackground"_s),
		$(table->get("text"_s)),
		$of("Tree.selectionForeground"_s),
		$of(textHighlightText),
		$of("Tree.selectionBackground"_s),
		$of(textHighlight),
		$of("Tree.selectionBorderColor"_s),
		$of(black),
		$of("Tree.dropLineColor"_s),
		$of(controlShadow),
		$of("Tree.editorBorder"_s),
		$of(blackLineBorder),
		$of("Tree.leftChildIndent"_s),
		$($of($Integer::valueOf(7))),
		$of("Tree.rightChildIndent"_s),
		$($of($Integer::valueOf(13))),
		$of("Tree.rowHeight"_s),
		$($of($Integer::valueOf(16))),
		$of("Tree.scrollsOnExpand"_s),
		$of($Boolean::TRUE),
		$of("Tree.openIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/TreeOpen.gif"_s)),
		$of("Tree.closedIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/TreeClosed.gif"_s)),
		$of("Tree.leafIcon"_s),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/TreeLeaf.gif"_s)),
		$of("Tree.expandedIcon"_s),
		($Object*)nullptr,
		$of("Tree.collapsedIcon"_s),
		($Object*)nullptr,
		$of("Tree.changeSelectionWithFocus"_s),
		$of($Boolean::TRUE),
		$of("Tree.drawsFocusBorderAroundIcon"_s),
		$of($Boolean::FALSE),
		$of("Tree.timeFactor"_s),
		$of(oneThousand),
		$of("Tree.focusInputMap"_s),
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
		$of("Tree.focusInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("selectParent"_s),
			$of("KP_RIGHT"_s),
			$of("selectParent"_s),
			$of("LEFT"_s),
			$of("selectChild"_s),
			$of("KP_LEFT"_s),
			$of("selectChild"_s)
		}))),
		$of("Tree.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("cancel"_s)
		}))),
		$of("RootPane.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("shift F10"_s),
			$of("postPopup"_s),
			$of("CONTEXT_MENU"_s),
			$of("postPopup"_s)
		}))),
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
}

int32_t BasicLookAndFeel::getFocusAcceleratorKeyMask() {
	$init(BasicLookAndFeel);
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, tk)) {
		return $nc(($cast($SunToolkit, tk)))->getFocusAcceleratorKeyMask();
	}
	return $ActionEvent::ALT_MASK;
}

$Object* BasicLookAndFeel::getUIOfType($ComponentUI* ui, $Class* klass) {
	$init(BasicLookAndFeel);
	if ($nc(klass)->isInstance(ui)) {
		return $of(ui);
	}
	return $of(nullptr);
}

$ActionMap* BasicLookAndFeel::getAudioActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, audioActionMap, $cast($ActionMap, $UIManager::get("AuditoryCues.actionMap"_s)));
	if (audioActionMap == nullptr) {
		$var($ObjectArray, acList, $cast($ObjectArray, $UIManager::get("AuditoryCues.cueList"_s)));
		if (acList != nullptr) {
			$assign(audioActionMap, $new($ActionMapUIResource));
			for (int32_t counter = acList->length - 1; counter >= 0; --counter) {
				audioActionMap->put(acList->get(counter), $(createAudioAction(acList->get(counter))));
			}
		}
		$nc($($UIManager::getLookAndFeelDefaults()))->put("AuditoryCues.actionMap"_s, audioActionMap);
	}
	return audioActionMap;
}

$Action* BasicLookAndFeel::createAudioAction(Object$* key) {
	$useLocalCurrentObjectStackCache();
	if (key != nullptr) {
		$var($String, audioKey, $cast($String, key));
		$var($String, audioValue, $cast($String, $UIManager::get(key)));
		return $new($BasicLookAndFeel$AudioAction, this, audioKey, audioValue);
	} else {
		return nullptr;
	}
}

$bytes* BasicLookAndFeel::loadAudioData($String* soundFile) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (soundFile == nullptr) {
		return nullptr;
	}
	$var($bytes, buffer, $cast($bytes, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($BasicLookAndFeel$3, this, soundFile)))));
	if (buffer == nullptr) {
		$nc($System::err)->println($$str({$($of(this)->getClass()->getName()), "/"_s, soundFile, " not found."_s}));
		return nullptr;
	}
	if ($nc(buffer)->length == 0) {
		$nc($System::err)->println($$str({"warning: "_s, soundFile, " is zero-length"_s}));
		return nullptr;
	}
	return buffer;
}

void BasicLookAndFeel::playSound($Action* audioAction) {
	$useLocalCurrentObjectStackCache();
	if (audioAction != nullptr) {
		$var($ObjectArray, audioStrings, $cast($ObjectArray, $UIManager::get("AuditoryCues.playList"_s)));
		if (audioStrings != nullptr) {
			$var($HashSet, audioCues, $new($HashSet));
			{
				$var($ObjectArray, arr$, audioStrings);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Object0, audioString, arr$->get(i$));
					{
						audioCues->add(audioString);
					}
				}
			}
			$init($Action);
			$var($String, actionName, $cast($String, audioAction->getValue($Action::NAME)));
			if (audioCues->contains(actionName)) {
				audioAction->actionPerformed($$new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, actionName));
			}
		}
	}
}

void BasicLookAndFeel::installAudioActionMap($ActionMap* map) {
	$init(BasicLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$var($LookAndFeel, laf, $UIManager::getLookAndFeel());
	if ($instanceOf(BasicLookAndFeel, laf)) {
		$nc(map)->setParent($($nc(($cast(BasicLookAndFeel, laf)))->getAudioActionMap()));
	}
}

void BasicLookAndFeel::playSound($JComponent* c, Object$* actionKey) {
	$init(BasicLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$var($LookAndFeel, laf, $UIManager::getLookAndFeel());
	if ($instanceOf(BasicLookAndFeel, laf)) {
		$var($ActionMap, map, $nc(c)->getActionMap());
		if (map != nullptr) {
			$var($Action, audioAction, map->get(actionKey));
			if (audioAction != nullptr) {
				$nc(($cast(BasicLookAndFeel, laf)))->playSound(audioAction);
			}
		}
	}
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$36($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($SortArrowIcon, false, "Table.sortIconColor"_s));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$35($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($SortArrowIcon, true, "Table.sortIconColor"_s));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$31($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicIconFactory::createEmptyFrameIcon());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$30($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicBorders::getTextFieldBorder());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$29($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicBorders::getSplitPaneDividerBorder());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$28($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicBorders::getSplitPaneBorder());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$27($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicBorders::getProgressBarBorder());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$26(int32_t zero, $UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BorderUIResource$EmptyBorderUIResource, 6, zero, zero, zero));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$25(int32_t ten, $UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BorderUIResource$EmptyBorderUIResource, ten, ten, 12, ten));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$24(int32_t zero, $UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BorderUIResource$EmptyBorderUIResource, zero, zero, zero, zero));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$23($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicIconFactory::getRadioButtonMenuItemIcon());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$22($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicIconFactory::getCheckBoxMenuItemIcon());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$21($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicIconFactory::getRadioButtonIcon());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$20($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicIconFactory::getCheckBoxIcon());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$19($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicIconFactory::getMenuArrowIcon());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$18($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicIconFactory::getMenuItemArrowIcon());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$17($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicIconFactory::getMenuItemCheckIcon());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$16($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicBorders::getMenuBarBorder());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$14($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicBorders::getRadioButtonBorder());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$13($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicBorders::getToggleButtonBorder());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$12($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicBorders::getButtonBorder());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$11($Color* controlLtHighlight, $Color* control, $Color* controlDkShadow, $Color* controlShadow, $UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BorderUIResource$BevelBorderUIResource, $BevelBorder::RAISED, controlLtHighlight, control, controlDkShadow, controlShadow));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$10($ColorUIResource* yellow, $UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BorderUIResource$LineBorderUIResource, yellow));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$9($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BorderUIResource::getBlackLineBorderUIResource());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$8($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BasicBorders::getInternalFrameBorder());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$7($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BorderUIResource::getLoweredBevelBorderUIResource());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$6($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($BorderUIResource::getEtchedBorderUIResource());
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$5($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BasicBorders$MarginBorder));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$4($UIDefaults* t) {
	$init(BasicLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::DIALOG, $Font::BOLD, 12));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$3($UIDefaults* t) {
	$init(BasicLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::MONOSPACED, $Font::PLAIN, 12));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$2($UIDefaults* t) {
	$init(BasicLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::SANS_SERIF, $Font::PLAIN, 12));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$1($UIDefaults* t) {
	$init(BasicLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::SERIF, $Font::PLAIN, 12));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$0($UIDefaults* t) {
	$init(BasicLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::DIALOG, $Font::PLAIN, 12));
}

BasicLookAndFeel::BasicLookAndFeel() {
}

$Class* BasicLookAndFeel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31::load$(name, initialize);
		}
		if (name->equals(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32::classInfo$.name)) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32::load$(name, initialize);
		}
	}
	$loadClass(BasicLookAndFeel, name, initialize, &_BasicLookAndFeel_ClassInfo_, allocate$BasicLookAndFeel);
	return class$;
}

$Class* BasicLookAndFeel::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax