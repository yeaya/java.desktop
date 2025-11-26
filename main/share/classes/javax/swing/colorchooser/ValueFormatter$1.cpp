#include <javax/swing/colorchooser/ValueFormatter$1.h>

#include <java/util/Locale.h>
#include <javax/swing/colorchooser/ValueFormatter.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <javax/swing/text/DocumentFilter.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ValueFormatter = ::javax::swing::colorchooser::ValueFormatter;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $DocumentFilter = ::javax::swing::text::DocumentFilter;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _ValueFormatter$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/colorchooser/ValueFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(ValueFormatter$1, this$0)},
	{}
};

$MethodInfo _ValueFormatter$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/colorchooser/ValueFormatter;)V", nullptr, 0, $method(static_cast<void(ValueFormatter$1::*)($ValueFormatter*)>(&ValueFormatter$1::init$))},
	{"insertString", "(Ljavax/swing/text/DocumentFilter$FilterBypass;ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"remove", "(Ljavax/swing/text/DocumentFilter$FilterBypass;II)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"replace", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{}
};

$EnclosingMethodInfo _ValueFormatter$1_EnclosingMethodInfo_ = {
	"javax.swing.colorchooser.ValueFormatter",
	nullptr,
	nullptr
};

$InnerClassInfo _ValueFormatter$1_InnerClassesInfo_[] = {
	{"javax.swing.colorchooser.ValueFormatter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ValueFormatter$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.ValueFormatter$1",
	"javax.swing.text.DocumentFilter",
	nullptr,
	_ValueFormatter$1_FieldInfo_,
	_ValueFormatter$1_MethodInfo_,
	nullptr,
	&_ValueFormatter$1_EnclosingMethodInfo_,
	_ValueFormatter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.colorchooser.ValueFormatter"
};

$Object* allocate$ValueFormatter$1($Class* clazz) {
	return $of($alloc(ValueFormatter$1));
}

void ValueFormatter$1::init$($ValueFormatter* this$0) {
	$set(this, this$0, this$0);
	$DocumentFilter::init$();
}

void ValueFormatter$1::remove($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length) {
	if (this->this$0->isValid($nc($($nc(fb)->getDocument()))->getLength() - length)) {
		$nc(fb)->remove(offset, length);
	}
}

void ValueFormatter$1::replace($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, $AttributeSet* set) {
	$useLocalCurrentObjectStackCache();
	int32_t var$1 = $nc($($nc(fb)->getDocument()))->getLength();
	bool var$0 = this->this$0->isValid(var$1 + $nc(text)->length() - length);
	if (var$0 && this->this$0->isValid(text)) {
		$init($Locale);
		$nc(fb)->replace(offset, length, $($nc(text)->toUpperCase($Locale::ENGLISH)), set);
	}
}

void ValueFormatter$1::insertString($DocumentFilter$FilterBypass* fb, int32_t offset, $String* text, $AttributeSet* set) {
	$useLocalCurrentObjectStackCache();
	int32_t var$1 = $nc($($nc(fb)->getDocument()))->getLength();
	bool var$0 = this->this$0->isValid(var$1 + $nc(text)->length());
	if (var$0 && this->this$0->isValid(text)) {
		$init($Locale);
		$nc(fb)->insertString(offset, $($nc(text)->toUpperCase($Locale::ENGLISH)), set);
	}
}

ValueFormatter$1::ValueFormatter$1() {
}

$Class* ValueFormatter$1::load$($String* name, bool initialize) {
	$loadClass(ValueFormatter$1, name, initialize, &_ValueFormatter$1_ClassInfo_, allocate$ValueFormatter$1);
	return class$;
}

$Class* ValueFormatter$1::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax