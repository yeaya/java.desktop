#include <javax/swing/JSpinner$ListEditor$ListFormatter$Filter.h>

#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$ListEditor$ListFormatter.h>
#include <javax/swing/JSpinner$ListEditor.h>
#include <javax/swing/SpinnerListModel.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <javax/swing/text/DocumentFilter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $JSpinner$ListEditor = ::javax::swing::JSpinner$ListEditor;
using $JSpinner$ListEditor$ListFormatter = ::javax::swing::JSpinner$ListEditor$ListFormatter;
using $SpinnerListModel = ::javax::swing::SpinnerListModel;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $DocumentFilter = ::javax::swing::text::DocumentFilter;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {

$FieldInfo _JSpinner$ListEditor$ListFormatter$Filter_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JSpinner$ListEditor$ListFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(JSpinner$ListEditor$ListFormatter$Filter, this$1)},
	{}
};

$MethodInfo _JSpinner$ListEditor$ListFormatter$Filter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JSpinner$ListEditor$ListFormatter;)V", nullptr, $PRIVATE, $method(static_cast<void(JSpinner$ListEditor$ListFormatter$Filter::*)($JSpinner$ListEditor$ListFormatter*)>(&JSpinner$ListEditor$ListFormatter$Filter::init$))},
	{"insertString", "(Ljavax/swing/text/DocumentFilter$FilterBypass;ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"replace", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{}
};

$InnerClassInfo _JSpinner$ListEditor$ListFormatter$Filter_InnerClassesInfo_[] = {
	{"javax.swing.JSpinner$ListEditor", "javax.swing.JSpinner", "ListEditor", $PUBLIC | $STATIC},
	{"javax.swing.JSpinner$ListEditor$ListFormatter", "javax.swing.JSpinner$ListEditor", "ListFormatter", $PRIVATE},
	{"javax.swing.JSpinner$ListEditor$ListFormatter$Filter", "javax.swing.JSpinner$ListEditor$ListFormatter", "Filter", $PRIVATE},
	{}
};

$ClassInfo _JSpinner$ListEditor$ListFormatter$Filter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JSpinner$ListEditor$ListFormatter$Filter",
	"javax.swing.text.DocumentFilter",
	nullptr,
	_JSpinner$ListEditor$ListFormatter$Filter_FieldInfo_,
	_JSpinner$ListEditor$ListFormatter$Filter_MethodInfo_,
	nullptr,
	nullptr,
	_JSpinner$ListEditor$ListFormatter$Filter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSpinner"
};

$Object* allocate$JSpinner$ListEditor$ListFormatter$Filter($Class* clazz) {
	return $of($alloc(JSpinner$ListEditor$ListFormatter$Filter));
}

void JSpinner$ListEditor$ListFormatter$Filter::init$($JSpinner$ListEditor$ListFormatter* this$1) {
	$set(this, this$1, this$1);
	$DocumentFilter::init$();
}

void JSpinner$ListEditor$ListFormatter$Filter::replace($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* string, $AttributeSet* attrs) {
	$useLocalCurrentObjectStackCache();
	if (string != nullptr && (offset + length) == $nc($($nc(fb)->getDocument()))->getLength()) {
		$var($Object, next, $nc($($nc(this->this$1->this$0)->getModel()))->findNextMatch($$str({$($nc($(fb->getDocument()))->getText(0, offset)), string})));
		$var($String, value, (next != nullptr) ? $nc($of(next))->toString() : ($String*)nullptr);
		if (value != nullptr) {
			fb->remove(0, offset + length);
			fb->insertString(0, value, nullptr);
			int32_t var$0 = offset + string->length();
			$nc($(this->this$1->getFormattedTextField()))->select(var$0, value->length());
			return;
		}
	}
	$DocumentFilter::replace(fb, offset, length, string, attrs);
}

void JSpinner$ListEditor$ListFormatter$Filter::insertString($DocumentFilter$FilterBypass* fb, int32_t offset, $String* string, $AttributeSet* attr) {
	replace(fb, offset, 0, string, attr);
}

JSpinner$ListEditor$ListFormatter$Filter::JSpinner$ListEditor$ListFormatter$Filter() {
}

$Class* JSpinner$ListEditor$ListFormatter$Filter::load$($String* name, bool initialize) {
	$loadClass(JSpinner$ListEditor$ListFormatter$Filter, name, initialize, &_JSpinner$ListEditor$ListFormatter$Filter_ClassInfo_, allocate$JSpinner$ListEditor$ListFormatter$Filter);
	return class$;
}

$Class* JSpinner$ListEditor$ListFormatter$Filter::class$ = nullptr;

	} // swing
} // javax