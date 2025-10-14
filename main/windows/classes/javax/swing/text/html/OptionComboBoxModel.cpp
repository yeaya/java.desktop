#include <javax/swing/text/html/OptionComboBoxModel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultComboBoxModel.h>
#include <javax/swing/text/html/Option.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;
using $Option = ::javax::swing::text::html::Option;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _OptionComboBoxModel_FieldInfo_[] = {
	{"selectedOption", "Ljavax/swing/text/html/Option;", nullptr, $PRIVATE, $field(OptionComboBoxModel, selectedOption)},
	{}
};

$MethodInfo _OptionComboBoxModel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OptionComboBoxModel::*)()>(&OptionComboBoxModel::init$))},
	{"getInitialSelection", "()Ljavax/swing/text/html/Option;", nullptr, $PUBLIC},
	{"setInitialSelection", "(Ljavax/swing/text/html/Option;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OptionComboBoxModel_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.OptionComboBoxModel",
	"javax.swing.DefaultComboBoxModel",
	nullptr,
	_OptionComboBoxModel_FieldInfo_,
	_OptionComboBoxModel_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljavax/swing/DefaultComboBoxModel<TE;>;Ljava/io/Serializable;"
};

$Object* allocate$OptionComboBoxModel($Class* clazz) {
	return $of($alloc(OptionComboBoxModel));
}

void OptionComboBoxModel::init$() {
	$DefaultComboBoxModel::init$();
	$set(this, selectedOption, nullptr);
}

void OptionComboBoxModel::setInitialSelection($Option* option) {
	$set(this, selectedOption, option);
}

$Option* OptionComboBoxModel::getInitialSelection() {
	return this->selectedOption;
}

OptionComboBoxModel::OptionComboBoxModel() {
}

$Class* OptionComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(OptionComboBoxModel, name, initialize, &_OptionComboBoxModel_ClassInfo_, allocate$OptionComboBoxModel);
	return class$;
}

$Class* OptionComboBoxModel::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax