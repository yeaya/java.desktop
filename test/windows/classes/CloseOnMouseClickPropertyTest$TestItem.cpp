#include <CloseOnMouseClickPropertyTest$TestItem.h>

#include <CloseOnMouseClickPropertyTest$1.h>
#include <CloseOnMouseClickPropertyTest$TestType.h>
#include <CloseOnMouseClickPropertyTest.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $CloseOnMouseClickPropertyTest = ::CloseOnMouseClickPropertyTest;
using $CloseOnMouseClickPropertyTest$1 = ::CloseOnMouseClickPropertyTest$1;
using $CloseOnMouseClickPropertyTest$TestType = ::CloseOnMouseClickPropertyTest$TestType;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _CloseOnMouseClickPropertyTest$TestItem_FieldInfo_[] = {
	{"type", "LCloseOnMouseClickPropertyTest$TestType;", nullptr, 0, $field(CloseOnMouseClickPropertyTest$TestItem, type)},
	{"compDoNotCloseOnMouseClick", "Ljava/lang/Boolean;", nullptr, 0, $field(CloseOnMouseClickPropertyTest$TestItem, compDoNotCloseOnMouseClick)},
	{"lafDoNotCloseOnMouseClick", "Ljava/lang/Boolean;", nullptr, 0, $field(CloseOnMouseClickPropertyTest$TestItem, lafDoNotCloseOnMouseClick)},
	{}
};

$MethodInfo _CloseOnMouseClickPropertyTest$TestItem_MethodInfo_[] = {
	{"<init>", "(LCloseOnMouseClickPropertyTest$TestType;Ljava/lang/Boolean;Ljava/lang/Boolean;)V", nullptr, $PUBLIC, $method(static_cast<void(CloseOnMouseClickPropertyTest$TestItem::*)($CloseOnMouseClickPropertyTest$TestType*,$Boolean*,$Boolean*)>(&CloseOnMouseClickPropertyTest$TestItem::init$))},
	{"doNotCloseOnMouseClick", "()Z", nullptr, 0},
	{"getMenuItem", "()Ljavax/swing/JMenuItem;", nullptr, 0},
	{"setProperties", "(Ljavax/swing/JMenuItem;)V", nullptr, 0},
	{}
};

$InnerClassInfo _CloseOnMouseClickPropertyTest$TestItem_InnerClassesInfo_[] = {
	{"CloseOnMouseClickPropertyTest$TestItem", "CloseOnMouseClickPropertyTest", "TestItem", $STATIC},
	{}
};

$ClassInfo _CloseOnMouseClickPropertyTest$TestItem_ClassInfo_ = {
	$ACC_SUPER,
	"CloseOnMouseClickPropertyTest$TestItem",
	"java.lang.Object",
	nullptr,
	_CloseOnMouseClickPropertyTest$TestItem_FieldInfo_,
	_CloseOnMouseClickPropertyTest$TestItem_MethodInfo_,
	nullptr,
	nullptr,
	_CloseOnMouseClickPropertyTest$TestItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CloseOnMouseClickPropertyTest"
};

$Object* allocate$CloseOnMouseClickPropertyTest$TestItem($Class* clazz) {
	return $of($alloc(CloseOnMouseClickPropertyTest$TestItem));
}

void CloseOnMouseClickPropertyTest$TestItem::init$($CloseOnMouseClickPropertyTest$TestType* type, $Boolean* compDoNotCloseOnMouseClick, $Boolean* lafDoNotCloseOnMouseClick) {
	$set(this, type, type);
	$set(this, compDoNotCloseOnMouseClick, compDoNotCloseOnMouseClick);
	$set(this, lafDoNotCloseOnMouseClick, lafDoNotCloseOnMouseClick);
}

bool CloseOnMouseClickPropertyTest$TestItem::doNotCloseOnMouseClick() {
	$init($CloseOnMouseClickPropertyTest$1);
	switch ($nc($CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType)->get($nc((this->type))->ordinal())) {
	case 1:
		{
			return false;
		}
	default:
		{
			return $nc((this->compDoNotCloseOnMouseClick != nullptr ? this->compDoNotCloseOnMouseClick : this->lafDoNotCloseOnMouseClick))->booleanValue();
		}
	}
}

void CloseOnMouseClickPropertyTest$TestItem::setProperties($JMenuItem* menuItem) {
	$init($CloseOnMouseClickPropertyTest$1);
	switch ($nc($CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType)->get($nc((this->type))->ordinal())) {
	case 2:
		{
			$nc(menuItem)->putClientProperty("CheckBoxMenuItem.doNotCloseOnMouseClick"_s, this->compDoNotCloseOnMouseClick);
			$UIManager::put("CheckBoxMenuItem.doNotCloseOnMouseClick"_s, this->lafDoNotCloseOnMouseClick);
			break;
		}
	case 3:
		{
			$nc(menuItem)->putClientProperty("RadioButtonMenuItem.doNotCloseOnMouseClick"_s, this->compDoNotCloseOnMouseClick);
			$UIManager::put("RadioButtonMenuItem.doNotCloseOnMouseClick"_s, this->lafDoNotCloseOnMouseClick);
			break;
		}
	default:
		{
			$nc(menuItem)->putClientProperty("CheckBoxMenuItem.doNotCloseOnMouseClick"_s, this->compDoNotCloseOnMouseClick);
			$nc(menuItem)->putClientProperty("RadioButtonMenuItem.doNotCloseOnMouseClick"_s, this->compDoNotCloseOnMouseClick);
			$UIManager::put("CheckBoxMenuItem.doNotCloseOnMouseClick"_s, this->lafDoNotCloseOnMouseClick);
			$UIManager::put("RadioButtonMenuItem.doNotCloseOnMouseClick"_s, this->lafDoNotCloseOnMouseClick);
		}
	}
}

$JMenuItem* CloseOnMouseClickPropertyTest$TestItem::getMenuItem() {
	$init($CloseOnMouseClickPropertyTest$1);
	switch ($nc($CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType)->get($nc((this->type))->ordinal())) {
	case 2:
		{
			return $new($JCheckBoxMenuItem, "Check Box"_s);
		}
	case 3:
		{
			return $new($JRadioButtonMenuItem, "Radio Button"_s);
		}
	default:
		{
			return $new($JMenuItem, "Menu Item"_s);
		}
	}
}

CloseOnMouseClickPropertyTest$TestItem::CloseOnMouseClickPropertyTest$TestItem() {
}

$Class* CloseOnMouseClickPropertyTest$TestItem::load$($String* name, bool initialize) {
	$loadClass(CloseOnMouseClickPropertyTest$TestItem, name, initialize, &_CloseOnMouseClickPropertyTest$TestItem_ClassInfo_, allocate$CloseOnMouseClickPropertyTest$TestItem);
	return class$;
}

$Class* CloseOnMouseClickPropertyTest$TestItem::class$ = nullptr;