#include <javax/swing/JPasswordField.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Arrays.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPasswordField$AccessibleJPasswordField.h>
#include <javax/swing/JTextField$AccessibleJTextField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Segment.h>
#include <jcpp.h>

#undef TRUE

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Arrays = ::java::util::Arrays;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JPasswordField$AccessibleJPasswordField = ::javax::swing::JPasswordField$AccessibleJPasswordField;
using $JTextField = ::javax::swing::JTextField;
using $JTextField$AccessibleJTextField = ::javax::swing::JTextField$AccessibleJTextField;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;
using $Segment = ::javax::swing::text::Segment;

namespace javax {
	namespace swing {

$NamedAttribute JPasswordField_Attribute_var$0[] = {
	{"description", 's', "Allows the editing of a line of text but doesn\'t show the characters."},
	{}
};

$NamedAttribute JPasswordField_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JPasswordField_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JPasswordField_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JPasswordField_Attribute_var$1},
	{}
};

$NamedAttribute JPasswordField_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JPasswordField_MethodAnnotations_getAccessibleContext9[] = {
	{"Ljava/beans/BeanProperty;", JPasswordField_Attribute_var$2},
	{}
};

$NamedAttribute JPasswordField_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JPasswordField_MethodAnnotations_getPassword11[] = {
	{"Ljava/beans/BeanProperty;", JPasswordField_Attribute_var$3},
	{}
};

$CompoundAttribute _JPasswordField_MethodAnnotations_getText12[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _JPasswordField_MethodAnnotations_getText13[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute JPasswordField_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JPasswordField_MethodAnnotations_getUIClassID14[] = {
	{"Ljava/beans/BeanProperty;", JPasswordField_Attribute_var$4},
	{}
};

$NamedAttribute JPasswordField_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "character to display in place of the real characters"},
	{}
};

$CompoundAttribute _JPasswordField_MethodAnnotations_setEchoChar16[] = {
	{"Ljava/beans/BeanProperty;", JPasswordField_Attribute_var$5},
	{}
};

$NamedAttribute JPasswordField_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "the text of this component"},
	{}
};

$CompoundAttribute _JPasswordField_MethodAnnotations_setText17[] = {
	{"Ljava/beans/BeanProperty;", JPasswordField_Attribute_var$6},
	{}
};

$FieldInfo _JPasswordField_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPasswordField, uiClassID)},
	{"echoChar", "C", nullptr, $PRIVATE, $field(JPasswordField, echoChar)},
	{"echoCharSet", "Z", nullptr, $PRIVATE, $field(JPasswordField, echoCharSet)},
	{}
};

$MethodInfo _JPasswordField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPasswordField::*)()>(&JPasswordField::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JPasswordField::*)($String*)>(&JPasswordField::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JPasswordField::*)(int32_t)>(&JPasswordField::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(JPasswordField::*)($String*,int32_t)>(&JPasswordField::init$))},
	{"<init>", "(Ljavax/swing/text/Document;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(JPasswordField::*)($Document*,$String*,int32_t)>(&JPasswordField::init$))},
	{"copy", "()V", nullptr, $PUBLIC},
	{"customSetUIProperty", "(Ljava/lang/String;Ljava/lang/Object;)Z", nullptr, 0},
	{"cut", "()V", nullptr, $PUBLIC},
	{"echoCharIsSet", "()Z", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPasswordField_MethodAnnotations_getAccessibleContext9},
	{"getEchoChar", "()C", nullptr, $PUBLIC},
	{"getPassword", "()[C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPasswordField_MethodAnnotations_getPassword11},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JPasswordField_MethodAnnotations_getText12},
	{"getText", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _JPasswordField_MethodAnnotations_getText13},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPasswordField_MethodAnnotations_getUIClassID14},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"setEchoChar", "(C)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPasswordField_MethodAnnotations_setEchoChar16},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPasswordField_MethodAnnotations_setText17},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JPasswordField::*)($ObjectOutputStream*)>(&JPasswordField::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JPasswordField_InnerClassesInfo_[] = {
	{"javax.swing.JPasswordField$AccessibleJPasswordField", "javax.swing.JPasswordField", "AccessibleJPasswordField", $PROTECTED},
	{}
};

$ClassInfo _JPasswordField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JPasswordField",
	"javax.swing.JTextField",
	nullptr,
	_JPasswordField_FieldInfo_,
	_JPasswordField_MethodInfo_,
	nullptr,
	nullptr,
	_JPasswordField_InnerClassesInfo_,
	_JPasswordField_Annotations_,
	nullptr,
	"javax.swing.JPasswordField$AccessibleJPasswordField"
};

$Object* allocate$JPasswordField($Class* clazz) {
	return $of($alloc(JPasswordField));
}

$String* JPasswordField::uiClassID = nullptr;

void JPasswordField::init$() {
	JPasswordField::init$(nullptr, nullptr, 0);
}

void JPasswordField::init$($String* text) {
	JPasswordField::init$(nullptr, text, 0);
}

void JPasswordField::init$(int32_t columns) {
	JPasswordField::init$(nullptr, nullptr, columns);
}

void JPasswordField::init$($String* text, int32_t columns) {
	JPasswordField::init$(nullptr, text, columns);
}

void JPasswordField::init$($Document* doc, $String* txt, int32_t columns) {
	$JTextField::init$(doc, txt, columns);
	this->echoCharSet = false;
	enableInputMethods(false);
}

$String* JPasswordField::getUIClassID() {
	return JPasswordField::uiClassID;
}

void JPasswordField::updateUI() {
	if (!this->echoCharSet) {
		this->echoChar = u'*';
	}
	$JTextField::updateUI();
}

char16_t JPasswordField::getEchoChar() {
	return this->echoChar;
}

void JPasswordField::setEchoChar(char16_t c) {
	this->echoChar = c;
	this->echoCharSet = true;
	repaint();
	revalidate();
}

bool JPasswordField::echoCharIsSet() {
	return this->echoChar != 0;
}

void JPasswordField::cut() {
	$init($Boolean);
	if (!$equals(getClientProperty("JPasswordField.cutCopyAllowed"_s), $Boolean::TRUE)) {
		$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(this);
	} else {
		$JTextField::cut();
	}
}

void JPasswordField::copy() {
	$init($Boolean);
	if (!$equals(getClientProperty("JPasswordField.cutCopyAllowed"_s), $Boolean::TRUE)) {
		$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(this);
	} else {
		$JTextField::copy();
	}
}

$String* JPasswordField::getText() {
	return $JTextField::getText();
}

$String* JPasswordField::getText(int32_t offs, int32_t len) {
	return $JTextField::getText(offs, len);
}

void JPasswordField::setText($String* t) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	int32_t nleft = $nc(doc)->getLength();
	$var($Segment, text, $new($Segment));
	text->setPartialReturn(true);
	int32_t offs = 0;
	try {
		while (nleft > 0) {
			doc->getText(offs, nleft, text);
			$Arrays::fill(text->array, text->offset, text->count + text->offset, u'\0');
			nleft -= text->count;
			offs += text->count;
		}
	} catch ($BadLocationException& ignored) {
	}
	$JTextField::setText(t);
}

$chars* JPasswordField::getPassword() {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	$var($Segment, txt, $new($Segment));
	try {
		$nc(doc)->getText(0, doc->getLength(), txt);
	} catch ($BadLocationException& e) {
		return nullptr;
	}
	$var($chars, retValue, $new($chars, txt->count));
	$System::arraycopy(txt->array, txt->offset, retValue, 0, txt->count);
	return retValue;
}

void JPasswordField::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JPasswordField::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JPasswordField::paramString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($JTextField::paramString()), ",echoChar="_s, $$str(this->echoChar)});
}

bool JPasswordField::customSetUIProperty($String* propertyName, Object$* value) {
	if (propertyName == "echoChar"_s) {
		if (!this->echoCharSet) {
			setEchoChar($nc(($cast($Character, value)))->charValue());
			this->echoCharSet = false;
		}
		return true;
	}
	return false;
}

$AccessibleContext* JPasswordField::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JPasswordField$AccessibleJPasswordField, this));
	}
	return this->accessibleContext;
}

JPasswordField::JPasswordField() {
}

void clinit$JPasswordField($Class* class$) {
	$assignStatic(JPasswordField::uiClassID, "PasswordFieldUI"_s);
}

$Class* JPasswordField::load$($String* name, bool initialize) {
	$loadClass(JPasswordField, name, initialize, &_JPasswordField_ClassInfo_, clinit$JPasswordField, allocate$JPasswordField);
	return class$;
}

$Class* JPasswordField::class$ = nullptr;

	} // swing
} // javax