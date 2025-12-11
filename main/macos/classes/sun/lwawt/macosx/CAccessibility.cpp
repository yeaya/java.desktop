#include <sun/lwawt/macosx/CAccessibility.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Number.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <java/util/concurrent/Callable.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleBundle.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleTable.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <sun/awt/AWTAccessor$AccessibleBundleAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CAccessibility$1.h>
#include <sun/lwawt/macosx/CAccessibility$10.h>
#include <sun/lwawt/macosx/CAccessibility$11.h>
#include <sun/lwawt/macosx/CAccessibility$12.h>
#include <sun/lwawt/macosx/CAccessibility$13.h>
#include <sun/lwawt/macosx/CAccessibility$14.h>
#include <sun/lwawt/macosx/CAccessibility$15.h>
#include <sun/lwawt/macosx/CAccessibility$16.h>
#include <sun/lwawt/macosx/CAccessibility$17.h>
#include <sun/lwawt/macosx/CAccessibility$18.h>
#include <sun/lwawt/macosx/CAccessibility$19.h>
#include <sun/lwawt/macosx/CAccessibility$2.h>
#include <sun/lwawt/macosx/CAccessibility$20.h>
#include <sun/lwawt/macosx/CAccessibility$21.h>
#include <sun/lwawt/macosx/CAccessibility$22.h>
#include <sun/lwawt/macosx/CAccessibility$23.h>
#include <sun/lwawt/macosx/CAccessibility$24.h>
#include <sun/lwawt/macosx/CAccessibility$25.h>
#include <sun/lwawt/macosx/CAccessibility$26.h>
#include <sun/lwawt/macosx/CAccessibility$27.h>
#include <sun/lwawt/macosx/CAccessibility$28.h>
#include <sun/lwawt/macosx/CAccessibility$29.h>
#include <sun/lwawt/macosx/CAccessibility$3.h>
#include <sun/lwawt/macosx/CAccessibility$30.h>
#include <sun/lwawt/macosx/CAccessibility$31.h>
#include <sun/lwawt/macosx/CAccessibility$32.h>
#include <sun/lwawt/macosx/CAccessibility$33.h>
#include <sun/lwawt/macosx/CAccessibility$34.h>
#include <sun/lwawt/macosx/CAccessibility$35.h>
#include <sun/lwawt/macosx/CAccessibility$36.h>
#include <sun/lwawt/macosx/CAccessibility$4.h>
#include <sun/lwawt/macosx/CAccessibility$5.h>
#include <sun/lwawt/macosx/CAccessibility$6.h>
#include <sun/lwawt/macosx/CAccessibility$7.h>
#include <sun/lwawt/macosx/CAccessibility$8.h>
#include <sun/lwawt/macosx/CAccessibility$9.h>
#include <sun/lwawt/macosx/CAccessible.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

#undef ICON
#undef JAVA_AX_ALL_CHILDREN
#undef JAVA_AX_COLS
#undef JAVA_AX_ROWS
#undef JAVA_AX_SELECTED_CHILDREN
#undef JAVA_AX_VISIBLE_CHILDREN

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $Callable = ::java::util::concurrent::Callable;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleBundle = ::javax::accessibility::AccessibleBundle;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleTable = ::javax::accessibility::AccessibleTable;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $Icon = ::javax::swing::Icon;
using $JLabel = ::javax::swing::JLabel;
using $JMenuItem = ::javax::swing::JMenuItem;
using $KeyStroke = ::javax::swing::KeyStroke;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AccessibleBundleAccessor = ::sun::awt::AWTAccessor$AccessibleBundleAccessor;
using $CAccessibility$1 = ::sun::lwawt::macosx::CAccessibility$1;
using $CAccessibility$10 = ::sun::lwawt::macosx::CAccessibility$10;
using $CAccessibility$11 = ::sun::lwawt::macosx::CAccessibility$11;
using $CAccessibility$12 = ::sun::lwawt::macosx::CAccessibility$12;
using $CAccessibility$13 = ::sun::lwawt::macosx::CAccessibility$13;
using $CAccessibility$14 = ::sun::lwawt::macosx::CAccessibility$14;
using $CAccessibility$15 = ::sun::lwawt::macosx::CAccessibility$15;
using $CAccessibility$16 = ::sun::lwawt::macosx::CAccessibility$16;
using $CAccessibility$17 = ::sun::lwawt::macosx::CAccessibility$17;
using $CAccessibility$18 = ::sun::lwawt::macosx::CAccessibility$18;
using $CAccessibility$19 = ::sun::lwawt::macosx::CAccessibility$19;
using $CAccessibility$2 = ::sun::lwawt::macosx::CAccessibility$2;
using $CAccessibility$20 = ::sun::lwawt::macosx::CAccessibility$20;
using $CAccessibility$21 = ::sun::lwawt::macosx::CAccessibility$21;
using $CAccessibility$22 = ::sun::lwawt::macosx::CAccessibility$22;
using $CAccessibility$23 = ::sun::lwawt::macosx::CAccessibility$23;
using $CAccessibility$24 = ::sun::lwawt::macosx::CAccessibility$24;
using $CAccessibility$25 = ::sun::lwawt::macosx::CAccessibility$25;
using $CAccessibility$26 = ::sun::lwawt::macosx::CAccessibility$26;
using $CAccessibility$27 = ::sun::lwawt::macosx::CAccessibility$27;
using $CAccessibility$28 = ::sun::lwawt::macosx::CAccessibility$28;
using $CAccessibility$29 = ::sun::lwawt::macosx::CAccessibility$29;
using $CAccessibility$3 = ::sun::lwawt::macosx::CAccessibility$3;
using $CAccessibility$30 = ::sun::lwawt::macosx::CAccessibility$30;
using $CAccessibility$31 = ::sun::lwawt::macosx::CAccessibility$31;
using $CAccessibility$32 = ::sun::lwawt::macosx::CAccessibility$32;
using $CAccessibility$33 = ::sun::lwawt::macosx::CAccessibility$33;
using $CAccessibility$34 = ::sun::lwawt::macosx::CAccessibility$34;
using $CAccessibility$35 = ::sun::lwawt::macosx::CAccessibility$35;
using $CAccessibility$36 = ::sun::lwawt::macosx::CAccessibility$36;
using $CAccessibility$4 = ::sun::lwawt::macosx::CAccessibility$4;
using $CAccessibility$5 = ::sun::lwawt::macosx::CAccessibility$5;
using $CAccessibility$6 = ::sun::lwawt::macosx::CAccessibility$6;
using $CAccessibility$7 = ::sun::lwawt::macosx::CAccessibility$7;
using $CAccessibility$8 = ::sun::lwawt::macosx::CAccessibility$8;
using $CAccessibility$9 = ::sun::lwawt::macosx::CAccessibility$9;
using $CAccessible = ::sun::lwawt::macosx::CAccessible;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility$$Lambda$lambda$getTableInfo$0 : public $Callable {
	$class(CAccessibility$$Lambda$lambda$getTableInfo$0, $NO_CLASS_INIT, $Callable)
public:
	void init$($Accessible* a, int32_t info) {
		$set(this, a, a);
		this->info = info;
	}
	virtual $Object* call() override {
		 return $of(CAccessibility::lambda$getTableInfo$0(a, info));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CAccessibility$$Lambda$lambda$getTableInfo$0>());
	}
	$Accessible* a = nullptr;
	int32_t info = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CAccessibility$$Lambda$lambda$getTableInfo$0::fieldInfos[3] = {
	{"a", "Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $field(CAccessibility$$Lambda$lambda$getTableInfo$0, a)},
	{"info", "I", nullptr, $PUBLIC, $field(CAccessibility$$Lambda$lambda$getTableInfo$0, info)},
	{}
};
$MethodInfo CAccessibility$$Lambda$lambda$getTableInfo$0::methodInfos[3] = {
	{"<init>", "(Ljavax/accessibility/Accessible;I)V", nullptr, $PUBLIC, $method(static_cast<void(CAccessibility$$Lambda$lambda$getTableInfo$0::*)($Accessible*,int32_t)>(&CAccessibility$$Lambda$lambda$getTableInfo$0::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CAccessibility$$Lambda$lambda$getTableInfo$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CAccessibility$$Lambda$lambda$getTableInfo$0",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* CAccessibility$$Lambda$lambda$getTableInfo$0::load$($String* name, bool initialize) {
	$loadClass(CAccessibility$$Lambda$lambda$getTableInfo$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CAccessibility$$Lambda$lambda$getTableInfo$0::class$ = nullptr;

$FieldInfo _CAccessibility_FieldInfo_[] = {
	{"ignoredRoles", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(CAccessibility, ignoredRoles)},
	{"sAccessibility", "Lsun/lwawt/macosx/CAccessibility;", nullptr, $STATIC, $staticField(CAccessibility, sAccessibility)},
	{"JAVA_AX_ALL_CHILDREN", "I", nullptr, $STATIC | $FINAL, $constField(CAccessibility, JAVA_AX_ALL_CHILDREN)},
	{"JAVA_AX_SELECTED_CHILDREN", "I", nullptr, $STATIC | $FINAL, $constField(CAccessibility, JAVA_AX_SELECTED_CHILDREN)},
	{"JAVA_AX_VISIBLE_CHILDREN", "I", nullptr, $STATIC | $FINAL, $constField(CAccessibility, JAVA_AX_VISIBLE_CHILDREN)},
	{"JAVA_AX_ROWS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CAccessibility, JAVA_AX_ROWS)},
	{"JAVA_AX_COLS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CAccessibility, JAVA_AX_COLS)},
	{}
};

$MethodInfo _CAccessibility_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CAccessibility::*)()>(&CAccessibility::init$))},
	{"_addChildren", "(Ljavax/accessibility/Accessible;IZLjava/util/ArrayList;)V", "(Ljavax/accessibility/Accessible;IZLjava/util/ArrayList<Ljava/lang/Object;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Accessible*,int32_t,bool,$ArrayList*)>(&CAccessibility::_addChildren))},
	{"accessibilityHitTest", "(Ljava/awt/Container;FF)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Accessible*(*)($Container*,float,float)>(&CAccessibility::accessibilityHitTest))},
	{"addAccessibleSelection", "(Ljavax/accessibility/AccessibleContext;ILjava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AccessibleContext*,int32_t,$Component*)>(&CAccessibility::addAccessibleSelection))},
	{"ax_getAccessibleSelection", "(Ljavax/accessibility/AccessibleContext;ILjava/awt/Component;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Accessible*(*)($AccessibleContext*,int32_t,$Component*)>(&CAccessibility::ax_getAccessibleSelection))},
	{"contains", "(Ljavax/accessibility/AccessibleContext;Ljavax/accessibility/AccessibleState;Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AccessibleContext*,$AccessibleState*,$Component*)>(&CAccessibility::contains))},
	{"doAccessibleAction", "(Ljavax/accessibility/AccessibleAction;ILjava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AccessibleAction*,int32_t,$Component*)>(&CAccessibility::doAccessibleAction))},
	{"focusChanged", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CAccessibility::*)()>(&CAccessibility::focusChanged))},
	{"getAWTView", "(Ljavax/accessibility/Accessible;)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)($Accessible*)>(&CAccessibility::getAWTView))},
	{"getAcceleratorText", "(Ljavax/accessibility/AccessibleContext;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($AccessibleContext*)>(&CAccessibility::getAcceleratorText))},
	{"getAccessibility", "([Ljava/lang/String;)Lsun/lwawt/macosx/CAccessibility;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<CAccessibility*(*)($StringArray*)>(&CAccessibility::getAccessibility))},
	{"getAccessibleAction", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessibleAction*(*)($Accessible*,$Component*)>(&CAccessibility::getAccessibleAction))},
	{"getAccessibleActionDescription", "(Ljavax/accessibility/AccessibleAction;ILjava/awt/Component;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($AccessibleAction*,int32_t,$Component*)>(&CAccessibility::getAccessibleActionDescription))},
	{"getAccessibleComponent", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessibleComponent*(*)($Accessible*,$Component*)>(&CAccessibility::getAccessibleComponent))},
	{"getAccessibleContext", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessibleContext*(*)($Accessible*,$Component*)>(&CAccessibility::getAccessibleContext))},
	{"getAccessibleDescription", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Accessible*,$Component*)>(&CAccessibility::getAccessibleDescription))},
	{"getAccessibleIndexInParent", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Accessible*,$Component*)>(&CAccessibility::getAccessibleIndexInParent))},
	{"getAccessibleName", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Accessible*,$Component*)>(&CAccessibility::getAccessibleName))},
	{"getAccessibleParent", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Accessible*(*)($Accessible*,$Component*)>(&CAccessibility::getAccessibleParent))},
	{"getAccessibleRole", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Accessible*,$Component*)>(&CAccessibility::getAccessibleRole))},
	{"getAccessibleRole", "(Ljavax/accessibility/Accessible;)Ljavax/accessibility/AccessibleRole;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AccessibleRole*(*)($Accessible*)>(&CAccessibility::getAccessibleRole))},
	{"getAccessibleRoleDisplayString", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Accessible*,$Component*)>(&CAccessibility::getAccessibleRoleDisplayString))},
	{"getAccessibleRoleFor", "(Ljavax/accessibility/Accessible;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($Accessible*)>(&CAccessibility::getAccessibleRoleFor))},
	{"getAccessibleRoleForLabel", "(Ljavax/swing/JLabel;Ljavax/accessibility/AccessibleRole;)Ljavax/accessibility/AccessibleRole;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AccessibleRole*(*)($JLabel*,$AccessibleRole*)>(&CAccessibility::getAccessibleRoleForLabel))},
	{"getAccessibleSelection", "(Ljavax/accessibility/AccessibleContext;Ljava/awt/Component;)Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessibleSelection*(*)($AccessibleContext*,$Component*)>(&CAccessibility::getAccessibleSelection))},
	{"getAccessibleStateSet", "(Ljavax/accessibility/AccessibleContext;Ljava/awt/Component;)Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessibleStateSet*(*)($AccessibleContext*,$Component*)>(&CAccessibility::getAccessibleStateSet))},
	{"getAccessibleText", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessibleText*(*)($Accessible*,$Component*)>(&CAccessibility::getAccessibleText))},
	{"getAccessibleValue", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessibleValue*(*)($Accessible*,$Component*)>(&CAccessibility::getAccessibleValue))},
	{"getCharCount", "(Ljavax/accessibility/AccessibleText;Ljava/awt/Component;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($AccessibleText*,$Component*)>(&CAccessibility::getCharCount))},
	{"getChildren", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)[Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ObjectArray*(*)($Accessible*,$Component*)>(&CAccessibility::getChildren))},
	{"getChildrenAndRoles", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;IZ)[Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ObjectArray*(*)($Accessible*,$Component*,int32_t,bool)>(&CAccessibility::getChildrenAndRoles))},
	{"getCurrentAccessibleValue", "(Ljavax/accessibility/AccessibleValue;Ljava/awt/Component;)Ljava/lang/Number;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Number*(*)($AccessibleValue*,$Component*)>(&CAccessibility::getCurrentAccessibleValue))},
	{"getFocusOwner", "(Ljava/awt/Component;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Accessible*(*)($Component*)>(&CAccessibility::getFocusOwner))},
	{"getInitialAttributeStates", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)[Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<$booleans*(*)($Accessible*,$Component*)>(&CAccessibility::getInitialAttributeStates))},
	{"getLocationOnScreen", "(Ljavax/accessibility/AccessibleComponent;Ljava/awt/Component;)Ljava/awt/Point;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Point*(*)($AccessibleComponent*,$Component*)>(&CAccessibility::getLocationOnScreen))},
	{"getMaximumAccessibleValue", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/Number;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Number*(*)($Accessible*,$Component*)>(&CAccessibility::getMaximumAccessibleValue))},
	{"getMinimumAccessibleValue", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/Number;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Number*(*)($Accessible*,$Component*)>(&CAccessibility::getMinimumAccessibleValue))},
	{"getSize", "(Ljavax/accessibility/AccessibleComponent;Ljava/awt/Component;)Ljava/awt/Dimension;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dimension*(*)($AccessibleComponent*,$Component*)>(&CAccessibility::getSize))},
	{"getTableInfo", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Accessible*,$Component*,int32_t)>(&CAccessibility::getTableInfo))},
	{"invokeAndWait", "(Ljava/util/concurrent/Callable;Ljava/awt/Component;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;Ljava/awt/Component;)TT;", $STATIC, $method(static_cast<$Object*(*)($Callable*,$Component*)>(&CAccessibility::invokeAndWait))},
	{"invokeAndWait", "(Ljava/util/concurrent/Callable;Ljava/awt/Component;Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;Ljava/awt/Component;TT;)TT;", $STATIC, $method(static_cast<$Object*(*)($Callable*,$Component*,Object$*)>(&CAccessibility::invokeAndWait))},
	{"invokeLater", "(Ljava/lang/Runnable;Ljava/awt/Component;)V", nullptr, $STATIC, $method(static_cast<void(*)($Runnable*,$Component*)>(&CAccessibility::invokeLater))},
	{"isAccessibleChildSelected", "(Ljavax/accessibility/Accessible;ILjava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Accessible*,int32_t,$Component*)>(&CAccessibility::isAccessibleChildSelected))},
	{"isEnabled", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Accessible*,$Component*)>(&CAccessibility::isEnabled))},
	{"isFocusTraversable", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Accessible*,$Component*)>(&CAccessibility::isFocusTraversable))},
	{"lambda$getTableInfo$0", "(Ljavax/accessibility/Accessible;I)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)($Accessible*,int32_t)>(&CAccessibility::lambda$getTableInfo$0)), "java.lang.Exception"},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"requestFocus", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Accessible*,$Component*)>(&CAccessibility::requestFocus))},
	{"requestSelection", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Accessible*,$Component*)>(&CAccessibility::requestSelection))},
	{"roleKey", "(Ljavax/accessibility/AccessibleRole;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)($AccessibleRole*)>(&CAccessibility::roleKey))},
	{}
};

#define _METHOD_INDEX_focusChanged 7
#define _METHOD_INDEX_roleKey 49

$InnerClassInfo _CAccessibility_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibility$36", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$35", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$34", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$33", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$32", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$31", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$30", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$29", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$28", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$27", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$26", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$25", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$24", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$23", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$22", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$21", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$20", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$19", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$18", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$17", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$16", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$15", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$14", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$13", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$12", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$11", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$10", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$9", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$8", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$7", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$6", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$5", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$4", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$3", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$2", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibility$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibility_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibility",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_CAccessibility_FieldInfo_,
	_CAccessibility_MethodInfo_,
	nullptr,
	nullptr,
	_CAccessibility_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibility$36,sun.lwawt.macosx.CAccessibility$35,sun.lwawt.macosx.CAccessibility$34,sun.lwawt.macosx.CAccessibility$33,sun.lwawt.macosx.CAccessibility$32,sun.lwawt.macosx.CAccessibility$31,sun.lwawt.macosx.CAccessibility$30,sun.lwawt.macosx.CAccessibility$29,sun.lwawt.macosx.CAccessibility$28,sun.lwawt.macosx.CAccessibility$27,sun.lwawt.macosx.CAccessibility$26,sun.lwawt.macosx.CAccessibility$25,sun.lwawt.macosx.CAccessibility$24,sun.lwawt.macosx.CAccessibility$23,sun.lwawt.macosx.CAccessibility$22,sun.lwawt.macosx.CAccessibility$21,sun.lwawt.macosx.CAccessibility$20,sun.lwawt.macosx.CAccessibility$19,sun.lwawt.macosx.CAccessibility$18,sun.lwawt.macosx.CAccessibility$17,sun.lwawt.macosx.CAccessibility$16,sun.lwawt.macosx.CAccessibility$15,sun.lwawt.macosx.CAccessibility$14,sun.lwawt.macosx.CAccessibility$13,sun.lwawt.macosx.CAccessibility$12,sun.lwawt.macosx.CAccessibility$11,sun.lwawt.macosx.CAccessibility$10,sun.lwawt.macosx.CAccessibility$9,sun.lwawt.macosx.CAccessibility$8,sun.lwawt.macosx.CAccessibility$7,sun.lwawt.macosx.CAccessibility$6,sun.lwawt.macosx.CAccessibility$5,sun.lwawt.macosx.CAccessibility$4,sun.lwawt.macosx.CAccessibility$3,sun.lwawt.macosx.CAccessibility$2,sun.lwawt.macosx.CAccessibility$1"
};

$Object* allocate$CAccessibility($Class* clazz) {
	return $of($alloc(CAccessibility));
}

$Set* CAccessibility::ignoredRoles = nullptr;
CAccessibility* CAccessibility::sAccessibility = nullptr;

CAccessibility* CAccessibility::getAccessibility($StringArray* roles) {
	$load(CAccessibility);
	$synchronized(class$) {
		$init(CAccessibility);
		$useLocalCurrentObjectStackCache();
		if (CAccessibility::sAccessibility != nullptr) {
			return CAccessibility::sAccessibility;
		}
		$assignStatic(CAccessibility::sAccessibility, $new(CAccessibility));
		if (roles != nullptr) {
			$assignStatic(CAccessibility::ignoredRoles, $new($HashSet, roles->length));
			{
				$var($StringArray, arr$, roles);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, role, arr$->get(i$));
					$nc(CAccessibility::ignoredRoles)->add(role);
				}
			}
		} else {
			$assignStatic(CAccessibility::ignoredRoles, $new($HashSet));
		}
		return CAccessibility::sAccessibility;
	}
}

void CAccessibility::init$() {
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->addPropertyChangeListener("focusOwner"_s, this);
}

void CAccessibility::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($Object, newValue, $nc(evt)->getNewValue());
	if (newValue == nullptr) {
		return;
	}
	if ($instanceOf($Accessible, newValue)) {
		$var($AccessibleContext, nvAC, $nc(($cast($Accessible, newValue)))->getAccessibleContext());
		$var($AccessibleRole, nvRole, $nc(nvAC)->getAccessibleRole());
		if (!$nc(CAccessibility::ignoredRoles)->contains($(roleKey(nvRole)))) {
			focusChanged();
		}
	}
}

void CAccessibility::focusChanged() {
	$prepareNative(CAccessibility, focusChanged, void);
	$invokeNative();
	$finishNative();
}

$Object* CAccessibility::invokeAndWait($Callable* callable, $Component* c) {
	$init(CAccessibility);
	if (c != nullptr) {
		try {
			return $of($LWCToolkit::invokeAndWait(callable, c));
		} catch ($Exception& e) {
			e->printStackTrace();
		}
	}
	return $of(nullptr);
}

$Object* CAccessibility::invokeAndWait($Callable* callable, $Component* c, Object$* defValue) {
	$init(CAccessibility);
	$var($Object, value, nullptr);
	if (c != nullptr) {
		try {
			$assign(value, $LWCToolkit::invokeAndWait(callable, c));
		} catch ($Exception& e) {
			e->printStackTrace();
		}
	}
	return $of(value != nullptr ? value : $of(defValue));
}

void CAccessibility::invokeLater($Runnable* runnable, $Component* c) {
	$init(CAccessibility);
	if (c != nullptr) {
		try {
			$LWCToolkit::invokeLater(runnable, c);
		} catch ($InvocationTargetException& e) {
			e->printStackTrace();
		}
	}
}

$String* CAccessibility::getAccessibleActionDescription($AccessibleAction* aa, int32_t index, $Component* c) {
	$init(CAccessibility);
	if (aa == nullptr) {
		return nullptr;
	}
	return $cast($String, invokeAndWait($$new($CAccessibility$2, aa, index), c));
}

void CAccessibility::doAccessibleAction($AccessibleAction* aa, int32_t index, $Component* c) {
	$init(CAccessibility);
	if (aa == nullptr) {
		return;
	}
	invokeLater($$new($CAccessibility$3, aa, index), c);
}

$Dimension* CAccessibility::getSize($AccessibleComponent* ac, $Component* c) {
	$init(CAccessibility);
	if (ac == nullptr) {
		return nullptr;
	}
	return $cast($Dimension, invokeAndWait($$new($CAccessibility$4, ac), c));
}

$AccessibleSelection* CAccessibility::getAccessibleSelection($AccessibleContext* ac, $Component* c) {
	$init(CAccessibility);
	if (ac == nullptr) {
		return nullptr;
	}
	return $cast($AccessibleSelection, invokeAndWait($$new($CAccessibility$5, ac), c));
}

$Accessible* CAccessibility::ax_getAccessibleSelection($AccessibleContext* ac, int32_t index, $Component* c) {
	$init(CAccessibility);
	if (ac == nullptr) {
		return nullptr;
	}
	return $cast($Accessible, invokeAndWait($$new($CAccessibility$6, ac, index), c));
}

void CAccessibility::addAccessibleSelection($AccessibleContext* ac, int32_t index, $Component* c) {
	$init(CAccessibility);
	if (ac == nullptr) {
		return;
	}
	invokeLater($$new($CAccessibility$7, ac, index), c);
}

$AccessibleContext* CAccessibility::getAccessibleContext($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($AccessibleContext, invokeAndWait($$new($CAccessibility$8, a), c));
}

bool CAccessibility::isAccessibleChildSelected($Accessible* a, int32_t index, $Component* c) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return false;
	}
	$var($Callable, var$0, static_cast<$Callable*>($new($CAccessibility$9, a, index)));
	$var($Component, var$1, c);
	return $nc(($cast($Boolean, $(invokeAndWait(var$0, var$1, $($Boolean::valueOf(false)))))))->booleanValue();
}

$AccessibleStateSet* CAccessibility::getAccessibleStateSet($AccessibleContext* ac, $Component* c) {
	$init(CAccessibility);
	if (ac == nullptr) {
		return nullptr;
	}
	return $cast($AccessibleStateSet, invokeAndWait($$new($CAccessibility$10, ac), c));
}

bool CAccessibility::contains($AccessibleContext* ac, $AccessibleState* as, $Component* c) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	if (ac == nullptr || as == nullptr) {
		return false;
	}
	$var($Callable, var$0, static_cast<$Callable*>($new($CAccessibility$11, ac, as)));
	$var($Component, var$1, c);
	return $nc(($cast($Boolean, $(invokeAndWait(var$0, var$1, $($Boolean::valueOf(false)))))))->booleanValue();
}

$String* CAccessibility::getAccessibleRoleFor($Accessible* a) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(a)->getAccessibleContext());
	if (ac == nullptr) {
		return nullptr;
	}
	$var($AccessibleRole, role, $nc(ac)->getAccessibleRole());
	return $nc($($AWTAccessor::getAccessibleBundleAccessor()))->getKey(role);
}

$String* CAccessibility::getAccessibleRole($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($String, invokeAndWait($$new($CAccessibility$12, a), c));
}

$Point* CAccessibility::getLocationOnScreen($AccessibleComponent* ac, $Component* c) {
	$init(CAccessibility);
	if (ac == nullptr) {
		return nullptr;
	}
	return $cast($Point, invokeAndWait($$new($CAccessibility$13, ac), c));
}

int32_t CAccessibility::getCharCount($AccessibleText* at, $Component* c) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	if (at == nullptr) {
		return 0;
	}
	$var($Callable, var$0, static_cast<$Callable*>($new($CAccessibility$14, at)));
	$var($Component, var$1, c);
	return $nc(($cast($Integer, $(invokeAndWait(var$0, var$1, $($Integer::valueOf(0)))))))->intValue();
}

$Accessible* CAccessibility::getAccessibleParent($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($Accessible, invokeAndWait($$new($CAccessibility$15, a), c));
}

int32_t CAccessibility::getAccessibleIndexInParent($Accessible* a, $Component* c) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return -1;
	}
	$var($Callable, var$0, static_cast<$Callable*>($new($CAccessibility$16, a)));
	$var($Component, var$1, c);
	return $nc(($cast($Integer, $(invokeAndWait(var$0, var$1, $($Integer::valueOf(-1)))))))->intValue();
}

$AccessibleComponent* CAccessibility::getAccessibleComponent($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($AccessibleComponent, invokeAndWait($$new($CAccessibility$17, a), c));
}

$AccessibleValue* CAccessibility::getAccessibleValue($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($AccessibleValue, invokeAndWait($$new($CAccessibility$18, a), c));
}

$String* CAccessibility::getAccessibleName($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($String, invokeAndWait($$new($CAccessibility$19, a), c));
}

$AccessibleText* CAccessibility::getAccessibleText($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($AccessibleText, invokeAndWait($$new($CAccessibility$20, a), c));
}

$String* CAccessibility::getAcceleratorText($AccessibleContext* ac) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	$var($String, accText, ""_s);
	$var($Accessible, parent, $nc(ac)->getAccessibleParent());
	if (parent != nullptr) {
		int32_t indexInParent = ac->getAccessibleIndexInParent();
		$var($Accessible, child, $nc($(parent->getAccessibleContext()))->getAccessibleChild(indexInParent));
		if ($instanceOf($JMenuItem, child)) {
			$var($JMenuItem, menuItem, $cast($JMenuItem, child));
			$var($KeyStroke, keyStroke, $nc(menuItem)->getAccelerator());
			if (keyStroke != nullptr) {
				int32_t modifiers = keyStroke->getModifiers();
				if (modifiers > 0) {
					$assign(accText, $KeyEvent::getKeyModifiersText(modifiers));
				}
				int32_t keyCode = keyStroke->getKeyCode();
				if (keyCode != 0) {
					$plusAssign(accText, $($KeyEvent::getKeyText(keyCode)));
				} else {
					$plusAssign(accText, keyStroke->getKeyChar());
				}
			}
		}
	}
	return accText;
}

$String* CAccessibility::getAccessibleDescription($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($String, invokeAndWait($$new($CAccessibility$21, a, c), c));
}

bool CAccessibility::isFocusTraversable($Accessible* a, $Component* c) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return false;
	}
	$var($Callable, var$0, static_cast<$Callable*>($new($CAccessibility$22, a)));
	$var($Component, var$1, c);
	return $nc(($cast($Boolean, $(invokeAndWait(var$0, var$1, $($Boolean::valueOf(false)))))))->booleanValue();
}

$Accessible* CAccessibility::accessibilityHitTest($Container* parent, float hitPointX, float hitPointY) {
	$init(CAccessibility);
	return $cast($Accessible, invokeAndWait($$new($CAccessibility$23, parent, hitPointX, hitPointY), parent));
}

$AccessibleAction* CAccessibility::getAccessibleAction($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($AccessibleAction, invokeAndWait($$new($CAccessibility$24, a), c));
}

bool CAccessibility::isEnabled($Accessible* a, $Component* c) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return false;
	}
	$var($Callable, var$0, static_cast<$Callable*>($new($CAccessibility$25, a)));
	$var($Component, var$1, c);
	return $nc(($cast($Boolean, $(invokeAndWait(var$0, var$1, $($Boolean::valueOf(false)))))))->booleanValue();
}

void CAccessibility::requestFocus($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return;
	}
	invokeLater($$new($CAccessibility$26, a), c);
}

void CAccessibility::requestSelection($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return;
	}
	invokeLater($$new($CAccessibility$27, a), c);
}

$Number* CAccessibility::getMaximumAccessibleValue($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($Number, invokeAndWait($$new($CAccessibility$28, a), c));
}

$Number* CAccessibility::getMinimumAccessibleValue($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($Number, invokeAndWait($$new($CAccessibility$29, a), c));
}

$String* CAccessibility::getAccessibleRoleDisplayString($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($String, invokeAndWait($$new($CAccessibility$30, a), c));
}

$Number* CAccessibility::getCurrentAccessibleValue($AccessibleValue* av, $Component* c) {
	$init(CAccessibility);
	if (av == nullptr) {
		return nullptr;
	}
	return $cast($Number, invokeAndWait($$new($CAccessibility$31, av), c));
}

$Accessible* CAccessibility::getFocusOwner($Component* c) {
	$init(CAccessibility);
	return $cast($Accessible, invokeAndWait($$new($CAccessibility$32), c));
}

$booleans* CAccessibility::getInitialAttributeStates($Accessible* a, $Component* c) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	$var($booleans, ret, $new($booleans, 7));
	if (a == nullptr) {
		return ret;
	}
	return $cast($booleans, invokeAndWait($$new($CAccessibility$33, a, ret), c));
}

$ObjectArray* CAccessibility::getChildrenAndRoles($Accessible* a, $Component* c, int32_t whichChildren, bool allowIgnored) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($ObjectArray, invokeAndWait($$new($CAccessibility$34, a, whichChildren, allowIgnored), c));
}

int32_t CAccessibility::getTableInfo($Accessible* a, $Component* c, int32_t info) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return 0;
	}
	return $nc(($cast($Integer, $(invokeAndWait(static_cast<$Callable*>($$new(CAccessibility$$Lambda$lambda$getTableInfo$0, a, info)), c)))))->intValue();
}

$AccessibleRole* CAccessibility::getAccessibleRoleForLabel($JLabel* l, $AccessibleRole* fallback) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	$var($String, text, $nc(l)->getText());
	if (text != nullptr && text->length() > 0) {
		return fallback;
	}
	$var($Icon, icon, l->getIcon());
	if (icon != nullptr) {
		$init($AccessibleRole);
		return $AccessibleRole::ICON;
	}
	return fallback;
}

$AccessibleRole* CAccessibility::getAccessibleRole($Accessible* a) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(a)->getAccessibleContext());
	$var($AccessibleRole, role, $nc(ac)->getAccessibleRole());
	$var($Object, component, $CAccessible::getSwingAccessible(a));
	if (role == nullptr) {
		return nullptr;
	}
	$var($String, roleString, $nc(role)->toString());
	if ("label"_s->equals(roleString) && $instanceOf($JLabel, component)) {
		return getAccessibleRoleForLabel($cast($JLabel, component), role);
	}
	return role;
}

void CAccessibility::_addChildren($Accessible* a, int32_t whichChildren, bool allowIgnored, $ArrayList* childrenAndRoles) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return;
	}
	$var($AccessibleContext, ac, $nc(a)->getAccessibleContext());
	if (ac == nullptr) {
		return;
	}
	int32_t numChildren = $nc(ac)->getAccessibleChildrenCount();
	for (int32_t i = 0; i < numChildren; ++i) {
		$var($Accessible, child, ac->getAccessibleChild(i));
		if (child == nullptr) {
			continue;
		}
		$var($AccessibleContext, context, $nc(child)->getAccessibleContext());
		if (context == nullptr) {
			continue;
		}
		if (whichChildren == CAccessibility::JAVA_AX_VISIBLE_CHILDREN) {
			$var($AccessibleComponent, acomp, $nc(context)->getAccessibleComponent());
			if (acomp == nullptr || !$nc(acomp)->isVisible()) {
				continue;
			}
		} else if (whichChildren == CAccessibility::JAVA_AX_SELECTED_CHILDREN) {
			$var($AccessibleSelection, sel, ac->getAccessibleSelection());
			if (sel == nullptr || !$nc(sel)->isAccessibleChildSelected(i)) {
				continue;
			}
		}
		if (!allowIgnored) {
			$var($AccessibleRole, role, $nc(context)->getAccessibleRole());
			if (role != nullptr && CAccessibility::ignoredRoles != nullptr && $nc(CAccessibility::ignoredRoles)->contains($(roleKey(role)))) {
				_addChildren(child, whichChildren, false, childrenAndRoles);
			} else {
				$nc(childrenAndRoles)->add(child);
				childrenAndRoles->add($(getAccessibleRole(child)));
			}
		} else {
			$nc(childrenAndRoles)->add(child);
			childrenAndRoles->add($(getAccessibleRole(child)));
		}
		if ((whichChildren >= 0) && ($nc(childrenAndRoles)->size() / 2) >= (whichChildren + 1)) {
			return;
		}
	}
}

$String* CAccessibility::roleKey($AccessibleRole* aRole) {
	$init(CAccessibility);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(CAccessibility, roleKey, $String*, $AccessibleRole* aRole);
	$assign($ret, $invokeNativeStaticObject(aRole));
	$finishNativeStatic();
	return $ret;
}

$ObjectArray* CAccessibility::getChildren($Accessible* a, $Component* c) {
	$init(CAccessibility);
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($ObjectArray, invokeAndWait($$new($CAccessibility$35, a), c));
}

int64_t CAccessibility::getAWTView($Accessible* a) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	$var($Accessible, ax, $CAccessible::getSwingAccessible(a));
	if (!($instanceOf($Component, ax))) {
		return 0;
	}
	return $nc(($cast($Long, $(invokeAndWait($$new($CAccessibility$36, ax), $cast($Component, ax))))))->longValue();
}

$Integer* CAccessibility::lambda$getTableInfo$0($Accessible* a, int32_t info) {
	$init(CAccessibility);
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $nc(a)->getAccessibleContext());
	$var($AccessibleTable, table, $nc(ac)->getAccessibleTable());
	if (table != nullptr) {
		if (info == CAccessibility::JAVA_AX_COLS) {
			return $Integer::valueOf(table->getAccessibleColumnCount());
		} else if (info == CAccessibility::JAVA_AX_ROWS) {
			return $Integer::valueOf(table->getAccessibleRowCount());
		}
	}
	return $Integer::valueOf(0);
}

void clinit$CAccessibility($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CAccessibility$1)));
	}
}

CAccessibility::CAccessibility() {
}

$Class* CAccessibility::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CAccessibility$$Lambda$lambda$getTableInfo$0::classInfo$.name)) {
			return CAccessibility$$Lambda$lambda$getTableInfo$0::load$(name, initialize);
		}
	}
	$loadClass(CAccessibility, name, initialize, &_CAccessibility_ClassInfo_, clinit$CAccessibility, allocate$CAccessibility);
	return class$;
}

$Class* CAccessibility::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun