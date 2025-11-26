#include <javax/swing/JSpinner$ListEditor$ListFormatter.h>

#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JSpinner$ListEditor$ListFormatter$Filter.h>
#include <javax/swing/JSpinner$ListEditor.h>
#include <javax/swing/text/DocumentFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $JSpinner$ListEditor = ::javax::swing::JSpinner$ListEditor;
using $JSpinner$ListEditor$ListFormatter$Filter = ::javax::swing::JSpinner$ListEditor$ListFormatter$Filter;
using $DocumentFilter = ::javax::swing::text::DocumentFilter;

namespace javax {
	namespace swing {

$FieldInfo _JSpinner$ListEditor$ListFormatter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JSpinner$ListEditor;", nullptr, $FINAL | $SYNTHETIC, $field(JSpinner$ListEditor$ListFormatter, this$0)},
	{"filter", "Ljavax/swing/text/DocumentFilter;", nullptr, $PRIVATE, $field(JSpinner$ListEditor$ListFormatter, filter)},
	{}
};

$MethodInfo _JSpinner$ListEditor$ListFormatter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JSpinner$ListEditor;)V", nullptr, $PRIVATE, $method(static_cast<void(JSpinner$ListEditor$ListFormatter::*)($JSpinner$ListEditor*)>(&JSpinner$ListEditor$ListFormatter::init$))},
	{"getDocumentFilter", "()Ljavax/swing/text/DocumentFilter;", nullptr, $PROTECTED},
	{"stringToValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{"valueToString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{}
};

$InnerClassInfo _JSpinner$ListEditor$ListFormatter_InnerClassesInfo_[] = {
	{"javax.swing.JSpinner$ListEditor", "javax.swing.JSpinner", "ListEditor", $PUBLIC | $STATIC},
	{"javax.swing.JSpinner$ListEditor$ListFormatter", "javax.swing.JSpinner$ListEditor", "ListFormatter", $PRIVATE},
	{"javax.swing.JFormattedTextField$AbstractFormatter", "javax.swing.JFormattedTextField", "AbstractFormatter", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.JSpinner$ListEditor$ListFormatter$Filter", "javax.swing.JSpinner$ListEditor$ListFormatter", "Filter", $PRIVATE},
	{}
};

$ClassInfo _JSpinner$ListEditor$ListFormatter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JSpinner$ListEditor$ListFormatter",
	"javax.swing.JFormattedTextField$AbstractFormatter",
	nullptr,
	_JSpinner$ListEditor$ListFormatter_FieldInfo_,
	_JSpinner$ListEditor$ListFormatter_MethodInfo_,
	nullptr,
	nullptr,
	_JSpinner$ListEditor$ListFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSpinner"
};

$Object* allocate$JSpinner$ListEditor$ListFormatter($Class* clazz) {
	return $of($alloc(JSpinner$ListEditor$ListFormatter));
}

void JSpinner$ListEditor$ListFormatter::init$($JSpinner$ListEditor* this$0) {
	$set(this, this$0, this$0);
	$JFormattedTextField$AbstractFormatter::init$();
}

$String* JSpinner$ListEditor$ListFormatter::valueToString(Object$* value) {
	if (value == nullptr) {
		return ""_s;
	}
	return $nc($of(value))->toString();
}

$Object* JSpinner$ListEditor$ListFormatter::stringToValue($String* string) {
	return $of(string);
}

$DocumentFilter* JSpinner$ListEditor$ListFormatter::getDocumentFilter() {
	if (this->filter == nullptr) {
		$set(this, filter, $new($JSpinner$ListEditor$ListFormatter$Filter, this));
	}
	return this->filter;
}

JSpinner$ListEditor$ListFormatter::JSpinner$ListEditor$ListFormatter() {
}

$Class* JSpinner$ListEditor$ListFormatter::load$($String* name, bool initialize) {
	$loadClass(JSpinner$ListEditor$ListFormatter, name, initialize, &_JSpinner$ListEditor$ListFormatter_ClassInfo_, allocate$JSpinner$ListEditor$ListFormatter);
	return class$;
}

$Class* JSpinner$ListEditor$ListFormatter::class$ = nullptr;

	} // swing
} // javax