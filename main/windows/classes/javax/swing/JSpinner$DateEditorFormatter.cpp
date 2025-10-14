#include <javax/swing/JSpinner$DateEditorFormatter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Comparable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DateFormat.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerDateModel.h>
#include <javax/swing/text/DateFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormat = ::java::text::DateFormat;
using $JSpinner = ::javax::swing::JSpinner;
using $SpinnerDateModel = ::javax::swing::SpinnerDateModel;
using $DateFormatter = ::javax::swing::text::DateFormatter;

namespace javax {
	namespace swing {

$FieldInfo _JSpinner$DateEditorFormatter_FieldInfo_[] = {
	{"model", "Ljavax/swing/SpinnerDateModel;", nullptr, $PRIVATE | $FINAL, $field(JSpinner$DateEditorFormatter, model)},
	{}
};

$MethodInfo _JSpinner$DateEditorFormatter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/SpinnerDateModel;Ljava/text/DateFormat;)V", nullptr, 0, $method(static_cast<void(JSpinner$DateEditorFormatter::*)($SpinnerDateModel*,$DateFormat*)>(&JSpinner$DateEditorFormatter::init$))},
	{"getMaximum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<Ljava/util/Date;>;", $PUBLIC},
	{"getMinimum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<Ljava/util/Date;>;", $PUBLIC},
	{"setMaximum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC},
	{"setMinimum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _JSpinner$DateEditorFormatter_InnerClassesInfo_[] = {
	{"javax.swing.JSpinner$DateEditorFormatter", "javax.swing.JSpinner", "DateEditorFormatter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JSpinner$DateEditorFormatter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JSpinner$DateEditorFormatter",
	"javax.swing.text.DateFormatter",
	nullptr,
	_JSpinner$DateEditorFormatter_FieldInfo_,
	_JSpinner$DateEditorFormatter_MethodInfo_,
	nullptr,
	nullptr,
	_JSpinner$DateEditorFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSpinner"
};

$Object* allocate$JSpinner$DateEditorFormatter($Class* clazz) {
	return $of($alloc(JSpinner$DateEditorFormatter));
}

void JSpinner$DateEditorFormatter::init$($SpinnerDateModel* model, $DateFormat* format) {
	$DateFormatter::init$(format);
	$set(this, model, model);
}

void JSpinner$DateEditorFormatter::setMinimum($Comparable* min) {
	$nc(this->model)->setStart(min);
}

$Comparable* JSpinner$DateEditorFormatter::getMinimum() {
	return $nc(this->model)->getStart();
}

void JSpinner$DateEditorFormatter::setMaximum($Comparable* max) {
	$nc(this->model)->setEnd(max);
}

$Comparable* JSpinner$DateEditorFormatter::getMaximum() {
	return $nc(this->model)->getEnd();
}

JSpinner$DateEditorFormatter::JSpinner$DateEditorFormatter() {
}

$Class* JSpinner$DateEditorFormatter::load$($String* name, bool initialize) {
	$loadClass(JSpinner$DateEditorFormatter, name, initialize, &_JSpinner$DateEditorFormatter_ClassInfo_, allocate$JSpinner$DateEditorFormatter);
	return class$;
}

$Class* JSpinner$DateEditorFormatter::class$ = nullptr;

	} // swing
} // javax