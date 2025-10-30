#include <javax/swing/JComboBox$KeySelectionManager.h>

#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JComboBox = ::javax::swing::JComboBox;

namespace javax {
	namespace swing {

$MethodInfo _JComboBox$KeySelectionManager_MethodInfo_[] = {
	{"selectionForKey", "(CLjavax/swing/ComboBoxModel;)I", "(CLjavax/swing/ComboBoxModel<*>;)I", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JComboBox$KeySelectionManager_InnerClassesInfo_[] = {
	{"javax.swing.JComboBox$KeySelectionManager", "javax.swing.JComboBox", "KeySelectionManager", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JComboBox$KeySelectionManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.JComboBox$KeySelectionManager",
	nullptr,
	nullptr,
	nullptr,
	_JComboBox$KeySelectionManager_MethodInfo_,
	nullptr,
	nullptr,
	_JComboBox$KeySelectionManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComboBox"
};

$Object* allocate$JComboBox$KeySelectionManager($Class* clazz) {
	return $of($alloc(JComboBox$KeySelectionManager));
}

$Class* JComboBox$KeySelectionManager::load$($String* name, bool initialize) {
	$loadClass(JComboBox$KeySelectionManager, name, initialize, &_JComboBox$KeySelectionManager_ClassInfo_, allocate$JComboBox$KeySelectionManager);
	return class$;
}

$Class* JComboBox$KeySelectionManager::class$ = nullptr;

	} // swing
} // javax