#include <javax/swing/plaf/basic/BasicComboBoxUI$DefaultKeySelectionManager.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JComboBox$KeySelectionManager.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JComboBox = ::javax::swing::JComboBox;
using $JComboBox$KeySelectionManager = ::javax::swing::JComboBox$KeySelectionManager;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $Position$Bias = ::javax::swing::text::Position$Bias;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboBoxUI$DefaultKeySelectionManager_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$DefaultKeySelectionManager, this$0)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicComboBoxUI$DefaultKeySelectionManager, prefix)},
	{"typedString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicComboBoxUI$DefaultKeySelectionManager, typedString)},
	{}
};

$MethodInfo _BasicComboBoxUI$DefaultKeySelectionManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, 0, $method(static_cast<void(BasicComboBoxUI$DefaultKeySelectionManager::*)($BasicComboBoxUI*)>(&BasicComboBoxUI$DefaultKeySelectionManager::init$))},
	{"selectionForKey", "(CLjavax/swing/ComboBoxModel;)I", "(CLjavax/swing/ComboBoxModel<*>;)I", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxUI$DefaultKeySelectionManager_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxUI$DefaultKeySelectionManager", "javax.swing.plaf.basic.BasicComboBoxUI", "DefaultKeySelectionManager", 0},
	{"javax.swing.JComboBox$KeySelectionManager", "javax.swing.JComboBox", "KeySelectionManager", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _BasicComboBoxUI$DefaultKeySelectionManager_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxUI$DefaultKeySelectionManager",
	"java.lang.Object",
	"javax.swing.JComboBox$KeySelectionManager,javax.swing.plaf.UIResource",
	_BasicComboBoxUI$DefaultKeySelectionManager_FieldInfo_,
	_BasicComboBoxUI$DefaultKeySelectionManager_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxUI$DefaultKeySelectionManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxUI"
};

$Object* allocate$BasicComboBoxUI$DefaultKeySelectionManager($Class* clazz) {
	return $of($alloc(BasicComboBoxUI$DefaultKeySelectionManager));
}

int32_t BasicComboBoxUI$DefaultKeySelectionManager::hashCode() {
	 return this->$JComboBox$KeySelectionManager::hashCode();
}

bool BasicComboBoxUI$DefaultKeySelectionManager::equals(Object$* arg0) {
	 return this->$JComboBox$KeySelectionManager::equals(arg0);
}

$Object* BasicComboBoxUI$DefaultKeySelectionManager::clone() {
	 return this->$JComboBox$KeySelectionManager::clone();
}

$String* BasicComboBoxUI$DefaultKeySelectionManager::toString() {
	 return this->$JComboBox$KeySelectionManager::toString();
}

void BasicComboBoxUI$DefaultKeySelectionManager::finalize() {
	this->$JComboBox$KeySelectionManager::finalize();
}

void BasicComboBoxUI$DefaultKeySelectionManager::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$set(this, prefix, ""_s);
	$set(this, typedString, ""_s);
}

int32_t BasicComboBoxUI$DefaultKeySelectionManager::selectionForKey(char16_t aKey, $ComboBoxModel* aModel) {
	if (this->this$0->lastTime == (int64_t)0) {
		$set(this, prefix, ""_s);
		$set(this, typedString, ""_s);
	}
	bool startingFromSelection = true;
	int32_t startIndex = $nc(this->this$0->comboBox)->getSelectedIndex();
	if (this->this$0->time - this->this$0->lastTime < this->this$0->timeFactor) {
		$plusAssignField(this, typedString, aKey);
		bool var$0 = ($nc(this->prefix)->length() == 1);
		if (var$0 && (aKey == $nc(this->prefix)->charAt(0))) {
			++startIndex;
		} else {
			$set(this, prefix, this->typedString);
		}
	} else {
		++startIndex;
		$set(this, typedString, $str({""_s, $$str(aKey)}));
		$set(this, prefix, this->typedString);
	}
	this->this$0->lastTime = this->this$0->time;
	if (startIndex < 0 || startIndex >= $nc(aModel)->getSize()) {
		startingFromSelection = false;
		startIndex = 0;
	}
	$init($Position$Bias);
	int32_t index = $nc(this->this$0->listBox)->getNextMatch(this->prefix, startIndex, $Position$Bias::Forward);
	if (index < 0 && startingFromSelection) {
		index = $nc(this->this$0->listBox)->getNextMatch(this->prefix, 0, $Position$Bias::Forward);
	}
	return index;
}

BasicComboBoxUI$DefaultKeySelectionManager::BasicComboBoxUI$DefaultKeySelectionManager() {
}

$Class* BasicComboBoxUI$DefaultKeySelectionManager::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxUI$DefaultKeySelectionManager, name, initialize, &_BasicComboBoxUI$DefaultKeySelectionManager_ClassInfo_, allocate$BasicComboBoxUI$DefaultKeySelectionManager);
	return class$;
}

$Class* BasicComboBoxUI$DefaultKeySelectionManager::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax