#include <javax/swing/colorchooser/ColorSelectionModel.h>

#include <java/awt/Color.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {
		namespace colorchooser {

$MethodInfo _ColorSelectionModel_MethodInfo_[] = {
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectedColor", "()Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSelectedColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ColorSelectionModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.colorchooser.ColorSelectionModel",
	nullptr,
	nullptr,
	nullptr,
	_ColorSelectionModel_MethodInfo_
};

$Object* allocate$ColorSelectionModel($Class* clazz) {
	return $of($alloc(ColorSelectionModel));
}

$Class* ColorSelectionModel::load$($String* name, bool initialize) {
	$loadClass(ColorSelectionModel, name, initialize, &_ColorSelectionModel_ClassInfo_, allocate$ColorSelectionModel);
	return class$;
}

$Class* ColorSelectionModel::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax