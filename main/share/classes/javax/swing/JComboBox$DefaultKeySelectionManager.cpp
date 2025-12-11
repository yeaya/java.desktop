#include <javax/swing/JComboBox$DefaultKeySelectionManager.h>

#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JComboBox$KeySelectionManager.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JComboBox = ::javax::swing::JComboBox;
using $JComboBox$KeySelectionManager = ::javax::swing::JComboBox$KeySelectionManager;

namespace javax {
	namespace swing {

$FieldInfo _JComboBox$DefaultKeySelectionManager_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(JComboBox$DefaultKeySelectionManager, this$0)},
	{}
};

$MethodInfo _JComboBox$DefaultKeySelectionManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JComboBox;)V", nullptr, 0, $method(static_cast<void(JComboBox$DefaultKeySelectionManager::*)($JComboBox*)>(&JComboBox$DefaultKeySelectionManager::init$))},
	{"selectionForKey", "(CLjavax/swing/ComboBoxModel;)I", "(CLjavax/swing/ComboBoxModel<*>;)I", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JComboBox$DefaultKeySelectionManager_InnerClassesInfo_[] = {
	{"javax.swing.JComboBox$DefaultKeySelectionManager", "javax.swing.JComboBox", "DefaultKeySelectionManager", 0},
	{"javax.swing.JComboBox$KeySelectionManager", "javax.swing.JComboBox", "KeySelectionManager", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JComboBox$DefaultKeySelectionManager_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JComboBox$DefaultKeySelectionManager",
	"java.lang.Object",
	"javax.swing.JComboBox$KeySelectionManager,java.io.Serializable",
	_JComboBox$DefaultKeySelectionManager_FieldInfo_,
	_JComboBox$DefaultKeySelectionManager_MethodInfo_,
	nullptr,
	nullptr,
	_JComboBox$DefaultKeySelectionManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComboBox"
};

$Object* allocate$JComboBox$DefaultKeySelectionManager($Class* clazz) {
	return $of($alloc(JComboBox$DefaultKeySelectionManager));
}

int32_t JComboBox$DefaultKeySelectionManager::hashCode() {
	 return this->$JComboBox$KeySelectionManager::hashCode();
}

bool JComboBox$DefaultKeySelectionManager::equals(Object$* arg0) {
	 return this->$JComboBox$KeySelectionManager::equals(arg0);
}

$Object* JComboBox$DefaultKeySelectionManager::clone() {
	 return this->$JComboBox$KeySelectionManager::clone();
}

$String* JComboBox$DefaultKeySelectionManager::toString() {
	 return this->$JComboBox$KeySelectionManager::toString();
}

void JComboBox$DefaultKeySelectionManager::finalize() {
	this->$JComboBox$KeySelectionManager::finalize();
}

void JComboBox$DefaultKeySelectionManager::init$($JComboBox* this$0) {
	$set(this, this$0, this$0);
}

int32_t JComboBox$DefaultKeySelectionManager::selectionForKey(char16_t aKey, $ComboBoxModel* aModel) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t c = 0;
	int32_t currentSelection = -1;
	$var($Object, selectedItem, $nc(aModel)->getSelectedItem());
	$var($String, v, nullptr);
	$var($String, pattern, nullptr);
	if (selectedItem != nullptr) {
		for (i = 0, c = aModel->getSize(); i < c; ++i) {
			if ($equals(selectedItem, aModel->getElementAt(i))) {
				currentSelection = i;
				break;
			}
		}
	}
	$assign(pattern, $nc(($$str({""_s, $$str(aKey)})))->toLowerCase());
	aKey = pattern->charAt(0);
	for (i = ++currentSelection, c = aModel->getSize(); i < c; ++i) {
		$var($Object, elem, aModel->getElementAt(i));
		if (elem != nullptr && $of(elem)->toString() != nullptr) {
			$assign(v, $nc($($of(elem)->toString()))->toLowerCase());
			bool var$0 = v->length() > 0;
			if (var$0 && v->charAt(0) == aKey) {
				return i;
			}
		}
	}
	for (i = 0; i < currentSelection; ++i) {
		$var($Object, elem, aModel->getElementAt(i));
		if (elem != nullptr && $of(elem)->toString() != nullptr) {
			$assign(v, $nc($($of(elem)->toString()))->toLowerCase());
			bool var$1 = v->length() > 0;
			if (var$1 && v->charAt(0) == aKey) {
				return i;
			}
		}
	}
	return -1;
}

JComboBox$DefaultKeySelectionManager::JComboBox$DefaultKeySelectionManager() {
}

$Class* JComboBox$DefaultKeySelectionManager::load$($String* name, bool initialize) {
	$loadClass(JComboBox$DefaultKeySelectionManager, name, initialize, &_JComboBox$DefaultKeySelectionManager_ClassInfo_, allocate$JComboBox$DefaultKeySelectionManager);
	return class$;
}

$Class* JComboBox$DefaultKeySelectionManager::class$ = nullptr;

	} // swing
} // javax