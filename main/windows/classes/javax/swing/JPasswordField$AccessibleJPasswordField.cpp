#include <javax/swing/JPasswordField$AccessibleJPasswordField.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleTextSequence.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextField$AccessibleJTextField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <jcpp.h>

#undef CHARACTER
#undef PASSWORD_TEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $AccessibleTextSequence = ::javax::accessibility::AccessibleTextSequence;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextField = ::javax::swing::JTextField;
using $JTextField$AccessibleJTextField = ::javax::swing::JTextField$AccessibleJTextField;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;

namespace javax {
	namespace swing {

$FieldInfo _JPasswordField$AccessibleJPasswordField_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JPasswordField;", nullptr, $FINAL | $SYNTHETIC, $field(JPasswordField$AccessibleJPasswordField, this$0)},
	{}
};

$MethodInfo _JPasswordField$AccessibleJPasswordField_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JPasswordField;)V", nullptr, $PROTECTED, $method(static_cast<void(JPasswordField$AccessibleJPasswordField::*)($JPasswordField*)>(&JPasswordField$AccessibleJPasswordField::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAfterIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAtIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBeforeIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEchoString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(JPasswordField$AccessibleJPasswordField::*)($String*)>(&JPasswordField$AccessibleJPasswordField::getEchoString))},
	{"getTextRange", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTextSequenceAfter", "(II)Ljavax/accessibility/AccessibleTextSequence;", nullptr, $PUBLIC},
	{"getTextSequenceAt", "(II)Ljavax/accessibility/AccessibleTextSequence;", nullptr, $PUBLIC},
	{"getTextSequenceBefore", "(II)Ljavax/accessibility/AccessibleTextSequence;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JPasswordField$AccessibleJPasswordField_InnerClassesInfo_[] = {
	{"javax.swing.JPasswordField$AccessibleJPasswordField", "javax.swing.JPasswordField", "AccessibleJPasswordField", $PROTECTED},
	{"javax.swing.JTextField$AccessibleJTextField", "javax.swing.JTextField", "AccessibleJTextField", $PROTECTED},
	{}
};

$ClassInfo _JPasswordField$AccessibleJPasswordField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JPasswordField$AccessibleJPasswordField",
	"javax.swing.JTextField$AccessibleJTextField",
	nullptr,
	_JPasswordField$AccessibleJPasswordField_FieldInfo_,
	_JPasswordField$AccessibleJPasswordField_MethodInfo_,
	nullptr,
	nullptr,
	_JPasswordField$AccessibleJPasswordField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JPasswordField"
};

$Object* allocate$JPasswordField$AccessibleJPasswordField($Class* clazz) {
	return $of($alloc(JPasswordField$AccessibleJPasswordField));
}

void JPasswordField$AccessibleJPasswordField::init$($JPasswordField* this$0) {
	$set(this, this$0, this$0);
	$JTextField$AccessibleJTextField::init$(this$0);
}

$AccessibleRole* JPasswordField$AccessibleJPasswordField::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PASSWORD_TEXT;
}

$AccessibleText* JPasswordField$AccessibleJPasswordField::getAccessibleText() {
	return this;
}

$String* JPasswordField$AccessibleJPasswordField::getEchoString($String* str) {
	if (str == nullptr) {
		return nullptr;
	}
	$var($chars, buffer, $new($chars, $nc(str)->length()));
	$Arrays::fill(buffer, this->this$0->getEchoChar());
	return $new($String, buffer);
}

$String* JPasswordField$AccessibleJPasswordField::getAtIndex(int32_t part, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (part == $AccessibleText::CHARACTER) {
		return getEchoString($($JTextField$AccessibleJTextField::getAtIndex(part, index)));
	} else {
		int32_t length = $nc($(this->this$0->getDocument()))->getLength();
		if (index < 0 || index >= length) {
			return nullptr;
		}
		$var($chars, password, $new($chars, length));
		$Arrays::fill(password, this->this$0->getEchoChar());
		return $new($String, password);
	}
}

$String* JPasswordField$AccessibleJPasswordField::getAfterIndex(int32_t part, int32_t index) {
	if (part == $AccessibleText::CHARACTER) {
		return getEchoString($($JTextField$AccessibleJTextField::getAfterIndex(part, index)));
	} else {
		return nullptr;
	}
}

$String* JPasswordField$AccessibleJPasswordField::getBeforeIndex(int32_t part, int32_t index) {
	if (part == $AccessibleText::CHARACTER) {
		return getEchoString($($JTextField$AccessibleJTextField::getBeforeIndex(part, index)));
	} else {
		return nullptr;
	}
}

$String* JPasswordField$AccessibleJPasswordField::getTextRange(int32_t startIndex, int32_t endIndex) {
	$var($String, str, $JTextField$AccessibleJTextField::getTextRange(startIndex, endIndex));
	return getEchoString(str);
}

$AccessibleTextSequence* JPasswordField$AccessibleJPasswordField::getTextSequenceAt(int32_t part, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (part == $AccessibleText::CHARACTER) {
		$var($AccessibleTextSequence, seq, $JTextField$AccessibleJTextField::getTextSequenceAt(part, index));
		if (seq == nullptr) {
			return nullptr;
		}
		return $new($AccessibleTextSequence, $nc(seq)->startIndex, seq->endIndex, $(getEchoString(seq->text)));
	} else {
		int32_t length = $nc($(this->this$0->getDocument()))->getLength();
		if (index < 0 || index >= length) {
			return nullptr;
		}
		$var($chars, password, $new($chars, length));
		$Arrays::fill(password, this->this$0->getEchoChar());
		$var($String, text, $new($String, password));
		return $new($AccessibleTextSequence, 0, password->length - 1, text);
	}
}

$AccessibleTextSequence* JPasswordField$AccessibleJPasswordField::getTextSequenceAfter(int32_t part, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (part == $AccessibleText::CHARACTER) {
		$var($AccessibleTextSequence, seq, $JTextField$AccessibleJTextField::getTextSequenceAfter(part, index));
		if (seq == nullptr) {
			return nullptr;
		}
		return $new($AccessibleTextSequence, $nc(seq)->startIndex, seq->endIndex, $(getEchoString(seq->text)));
	} else {
		return nullptr;
	}
}

$AccessibleTextSequence* JPasswordField$AccessibleJPasswordField::getTextSequenceBefore(int32_t part, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (part == $AccessibleText::CHARACTER) {
		$var($AccessibleTextSequence, seq, $JTextField$AccessibleJTextField::getTextSequenceBefore(part, index));
		if (seq == nullptr) {
			return nullptr;
		}
		return $new($AccessibleTextSequence, $nc(seq)->startIndex, seq->endIndex, $(getEchoString(seq->text)));
	} else {
		return nullptr;
	}
}

JPasswordField$AccessibleJPasswordField::JPasswordField$AccessibleJPasswordField() {
}

$Class* JPasswordField$AccessibleJPasswordField::load$($String* name, bool initialize) {
	$loadClass(JPasswordField$AccessibleJPasswordField, name, initialize, &_JPasswordField$AccessibleJPasswordField_ClassInfo_, allocate$JPasswordField$AccessibleJPasswordField);
	return class$;
}

$Class* JPasswordField$AccessibleJPasswordField::class$ = nullptr;

	} // swing
} // javax