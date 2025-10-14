#include <javax/swing/JSpinner$NumberEditorFormatter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Comparable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/NumberFormat.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/NumberFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormat = ::java::text::NumberFormat;
using $JSpinner = ::javax::swing::JSpinner;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $NumberFormatter = ::javax::swing::text::NumberFormatter;

namespace javax {
	namespace swing {

$FieldInfo _JSpinner$NumberEditorFormatter_FieldInfo_[] = {
	{"model", "Ljavax/swing/SpinnerNumberModel;", nullptr, $PRIVATE | $FINAL, $field(JSpinner$NumberEditorFormatter, model)},
	{}
};

$MethodInfo _JSpinner$NumberEditorFormatter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/SpinnerNumberModel;Ljava/text/NumberFormat;)V", nullptr, 0, $method(static_cast<void(JSpinner$NumberEditorFormatter::*)($SpinnerNumberModel*,$NumberFormat*)>(&JSpinner$NumberEditorFormatter::init$))},
	{"getMaximum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC},
	{"getMinimum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC},
	{"setMaximum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC},
	{"setMinimum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _JSpinner$NumberEditorFormatter_InnerClassesInfo_[] = {
	{"javax.swing.JSpinner$NumberEditorFormatter", "javax.swing.JSpinner", "NumberEditorFormatter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JSpinner$NumberEditorFormatter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JSpinner$NumberEditorFormatter",
	"javax.swing.text.NumberFormatter",
	nullptr,
	_JSpinner$NumberEditorFormatter_FieldInfo_,
	_JSpinner$NumberEditorFormatter_MethodInfo_,
	nullptr,
	nullptr,
	_JSpinner$NumberEditorFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSpinner"
};

$Object* allocate$JSpinner$NumberEditorFormatter($Class* clazz) {
	return $of($alloc(JSpinner$NumberEditorFormatter));
}

void JSpinner$NumberEditorFormatter::init$($SpinnerNumberModel* model, $NumberFormat* format) {
	$NumberFormatter::init$(format);
	$set(this, model, model);
	setValueClass($nc($of($($nc(model)->getValue())))->getClass());
}

void JSpinner$NumberEditorFormatter::setMinimum($Comparable* min) {
	$nc(this->model)->setMinimum(min);
}

$Comparable* JSpinner$NumberEditorFormatter::getMinimum() {
	return $nc(this->model)->getMinimum();
}

void JSpinner$NumberEditorFormatter::setMaximum($Comparable* max) {
	$nc(this->model)->setMaximum(max);
}

$Comparable* JSpinner$NumberEditorFormatter::getMaximum() {
	return $nc(this->model)->getMaximum();
}

JSpinner$NumberEditorFormatter::JSpinner$NumberEditorFormatter() {
}

$Class* JSpinner$NumberEditorFormatter::load$($String* name, bool initialize) {
	$loadClass(JSpinner$NumberEditorFormatter, name, initialize, &_JSpinner$NumberEditorFormatter_ClassInfo_, allocate$JSpinner$NumberEditorFormatter);
	return class$;
}

$Class* JSpinner$NumberEditorFormatter::class$ = nullptr;

	} // swing
} // javax