#include <javax/swing/plaf/synth/SynthComboPopup.h>

#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI.h>
#include <jcpp.h>

#undef SINGLE_SELECTION

using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JList = ::javax::swing::JList;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $SynthComboBoxUI = ::javax::swing::plaf::synth::SynthComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthComboPopup_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(SynthComboPopup::*)($JComboBox*)>(&SynthComboPopup::init$))},
	{"computePopupBounds", "(IIII)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"configureList", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _SynthComboPopup_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthComboPopup",
	"javax.swing.plaf.basic.BasicComboPopup",
	nullptr,
	nullptr,
	_SynthComboPopup_MethodInfo_
};

$Object* allocate$SynthComboPopup($Class* clazz) {
	return $of($alloc(SynthComboPopup));
}

void SynthComboPopup::init$($JComboBox* combo) {
	$BasicComboPopup::init$(combo);
}

void SynthComboPopup::configureList() {
	$useLocalCurrentObjectStackCache();
	$nc(this->list$)->setFont($($nc(this->comboBox)->getFont()));
	$nc(this->list$)->setCellRenderer($($nc(this->comboBox)->getRenderer()));
	$nc(this->list$)->setFocusable(false);
	$nc(this->list$)->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
	int32_t selectedIndex = $nc(this->comboBox)->getSelectedIndex();
	if (selectedIndex == -1) {
		$nc(this->list$)->clearSelection();
	} else {
		$nc(this->list$)->setSelectedIndex(selectedIndex);
		$nc(this->list$)->ensureIndexIsVisible(selectedIndex);
	}
	installListListeners();
}

$Rectangle* SynthComboPopup::computePopupBounds(int32_t px, int32_t py, int32_t pw, int32_t ph) {
	$useLocalCurrentObjectStackCache();
	$var($ComboBoxUI, ui, $cast($ComboBoxUI, $nc(this->comboBox)->getUI()));
	if ($instanceOf($SynthComboBoxUI, ui)) {
		$var($SynthComboBoxUI, sui, $cast($SynthComboBoxUI, ui));
		if ($nc(sui)->popupInsets != nullptr) {
			$var($Insets, i, sui->popupInsets);
			return $BasicComboPopup::computePopupBounds(px + $nc(i)->left, py + i->top, pw - i->left - i->right, ph - i->top - i->bottom);
		}
	}
	return $BasicComboPopup::computePopupBounds(px, py, pw, ph);
}

SynthComboPopup::SynthComboPopup() {
}

$Class* SynthComboPopup::load$($String* name, bool initialize) {
	$loadClass(SynthComboPopup, name, initialize, &_SynthComboPopup_ClassInfo_, allocate$SynthComboPopup);
	return class$;
}

$Class* SynthComboPopup::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax