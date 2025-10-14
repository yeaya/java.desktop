#include <javax/swing/UIManager$LAFState.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Properties.h>
#include <java/util/Vector.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/MultiUIDefaults.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/SwingPropertyChangeSupport.h>
#include <jcpp.h>

using $UIDefaultsArray = $Array<::javax::swing::UIDefaults>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $Vector = ::java::util::Vector;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $MultiUIDefaults = ::javax::swing::MultiUIDefaults;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $SwingPropertyChangeSupport = ::javax::swing::event::SwingPropertyChangeSupport;

namespace javax {
	namespace swing {

$FieldInfo _UIManager$LAFState_FieldInfo_[] = {
	{"swingProps", "Ljava/util/Properties;", nullptr, 0, $field(UIManager$LAFState, swingProps)},
	{"tables", "[Ljavax/swing/UIDefaults;", nullptr, $PRIVATE, $field(UIManager$LAFState, tables)},
	{"initialized", "Z", nullptr, 0, $field(UIManager$LAFState, initialized)},
	{"focusPolicyInitialized", "Z", nullptr, 0, $field(UIManager$LAFState, focusPolicyInitialized)},
	{"multiUIDefaults", "Ljavax/swing/MultiUIDefaults;", nullptr, 0, $field(UIManager$LAFState, multiUIDefaults)},
	{"lookAndFeel", "Ljavax/swing/LookAndFeel;", nullptr, 0, $field(UIManager$LAFState, lookAndFeel)},
	{"multiLookAndFeel", "Ljavax/swing/LookAndFeel;", nullptr, 0, $field(UIManager$LAFState, multiLookAndFeel)},
	{"auxLookAndFeels", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/LookAndFeel;>;", 0, $field(UIManager$LAFState, auxLookAndFeels)},
	{"changeSupport", "Ljavax/swing/event/SwingPropertyChangeSupport;", nullptr, 0, $field(UIManager$LAFState, changeSupport)},
	{"installedLAFs", "[Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, 0, $field(UIManager$LAFState, installedLAFs)},
	{}
};

$MethodInfo _UIManager$LAFState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UIManager$LAFState::*)()>(&UIManager$LAFState::init$))},
	{"getLookAndFeelDefaults", "()Ljavax/swing/UIDefaults;", nullptr, 0},
	{"getPropertyChangeSupport", "(Z)Ljavax/swing/event/SwingPropertyChangeSupport;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSystemDefaults", "()Ljavax/swing/UIDefaults;", nullptr, 0},
	{"setLookAndFeelDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, 0},
	{"setSystemDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, 0},
	{}
};

$InnerClassInfo _UIManager$LAFState_InnerClassesInfo_[] = {
	{"javax.swing.UIManager$LAFState", "javax.swing.UIManager", "LAFState", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UIManager$LAFState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.UIManager$LAFState",
	"java.lang.Object",
	nullptr,
	_UIManager$LAFState_FieldInfo_,
	_UIManager$LAFState_MethodInfo_,
	nullptr,
	nullptr,
	_UIManager$LAFState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.UIManager"
};

$Object* allocate$UIManager$LAFState($Class* clazz) {
	return $of($alloc(UIManager$LAFState));
}

void UIManager$LAFState::init$() {
	$set(this, tables, $new($UIDefaultsArray, 2));
	this->initialized = false;
	this->focusPolicyInitialized = false;
	$set(this, multiUIDefaults, $new($MultiUIDefaults, this->tables));
	$set(this, multiLookAndFeel, nullptr);
	$set(this, auxLookAndFeels, nullptr);
}

$UIDefaults* UIManager$LAFState::getLookAndFeelDefaults() {
	return $nc(this->tables)->get(0);
}

void UIManager$LAFState::setLookAndFeelDefaults($UIDefaults* x) {
	$nc(this->tables)->set(0, x);
}

$UIDefaults* UIManager$LAFState::getSystemDefaults() {
	return $nc(this->tables)->get(1);
}

void UIManager$LAFState::setSystemDefaults($UIDefaults* x) {
	$nc(this->tables)->set(1, x);
}

$SwingPropertyChangeSupport* UIManager$LAFState::getPropertyChangeSupport(bool create) {
	$synchronized(this) {
		if (create && this->changeSupport == nullptr) {
			$load($UIManager);
			$set(this, changeSupport, $new($SwingPropertyChangeSupport, $UIManager::class$));
		}
		return this->changeSupport;
	}
}

UIManager$LAFState::UIManager$LAFState() {
}

$Class* UIManager$LAFState::load$($String* name, bool initialize) {
	$loadClass(UIManager$LAFState, name, initialize, &_UIManager$LAFState_ClassInfo_, allocate$UIManager$LAFState);
	return class$;
}

$Class* UIManager$LAFState::class$ = nullptr;

	} // swing
} // javax