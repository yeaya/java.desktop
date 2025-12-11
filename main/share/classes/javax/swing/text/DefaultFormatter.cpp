#include <javax/swing/text/DefaultFormatter.h>

#include <java/lang/Math.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/text/ParseException.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultFormatter$DefaultDocumentFilter.h>
#include <javax/swing/text/DefaultFormatter$DefaultNavigationFilter.h>
#include <javax/swing/text/DefaultFormatter$ReplaceHolder.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <javax/swing/text/DocumentFilter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NavigationFilter$FilterBypass.h>
#include <javax/swing/text/NavigationFilter.h>
#include <javax/swing/text/Position$Bias.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef EAST
#undef WEST

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Constructor = ::java::lang::reflect::Constructor;
using $ParseException = ::java::text::ParseException;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $SwingConstants = ::javax::swing::SwingConstants;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Caret = ::javax::swing::text::Caret;
using $DefaultFormatter$DefaultDocumentFilter = ::javax::swing::text::DefaultFormatter$DefaultDocumentFilter;
using $DefaultFormatter$DefaultNavigationFilter = ::javax::swing::text::DefaultFormatter$DefaultNavigationFilter;
using $DefaultFormatter$ReplaceHolder = ::javax::swing::text::DefaultFormatter$ReplaceHolder;
using $Document = ::javax::swing::text::Document;
using $DocumentFilter = ::javax::swing::text::DocumentFilter;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;
using $NavigationFilter$FilterBypass = ::javax::swing::text::NavigationFilter$FilterBypass;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultFormatter_FieldInfo_[] = {
	{"allowsInvalid", "Z", nullptr, $PRIVATE, $field(DefaultFormatter, allowsInvalid)},
	{"overwriteMode", "Z", nullptr, $PRIVATE, $field(DefaultFormatter, overwriteMode)},
	{"commitOnEdit", "Z", nullptr, $PRIVATE, $field(DefaultFormatter, commitOnEdit)},
	{"valueClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(DefaultFormatter, valueClass)},
	{"navigationFilter", "Ljavax/swing/text/NavigationFilter;", nullptr, $PRIVATE, $field(DefaultFormatter, navigationFilter)},
	{"documentFilter", "Ljavax/swing/text/DocumentFilter;", nullptr, $PRIVATE, $field(DefaultFormatter, documentFilter)},
	{"replaceHolder", "Ljavax/swing/text/DefaultFormatter$ReplaceHolder;", nullptr, $TRANSIENT, $field(DefaultFormatter, replaceHolder)},
	{}
};

$MethodInfo _DefaultFormatter_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultFormatter::*)()>(&DefaultFormatter::init$))},
	{"access$000", "(Ljavax/swing/text/DefaultFormatter;)Ljavax/swing/JFormattedTextField;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JFormattedTextField*(*)(DefaultFormatter*)>(&DefaultFormatter::access$000))},
	{"access$100", "(Ljavax/swing/text/DefaultFormatter;)Ljavax/swing/JFormattedTextField;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JFormattedTextField*(*)(DefaultFormatter*)>(&DefaultFormatter::access$100))},
	{"access$200", "(Ljavax/swing/text/DefaultFormatter;)Ljavax/swing/JFormattedTextField;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JFormattedTextField*(*)(DefaultFormatter*)>(&DefaultFormatter::access$200))},
	{"access$300", "(Ljavax/swing/text/DefaultFormatter;)Ljavax/swing/JFormattedTextField;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JFormattedTextField*(*)(DefaultFormatter*)>(&DefaultFormatter::access$300))},
	{"access$400", "(Ljavax/swing/text/DefaultFormatter;)Ljavax/swing/JFormattedTextField;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JFormattedTextField*(*)(DefaultFormatter*)>(&DefaultFormatter::access$400))},
	{"canReplace", "(Ljavax/swing/text/DefaultFormatter$ReplaceHolder;)Z", nullptr, 0},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"commitEdit", "()V", nullptr, 0, nullptr, "java.text.ParseException"},
	{"getAllowsInvalid", "()Z", nullptr, $PUBLIC},
	{"getCommitsOnValidEdit", "()Z", nullptr, $PUBLIC},
	{"getDocumentFilter", "()Ljavax/swing/text/DocumentFilter;", nullptr, $PROTECTED},
	{"getInitialVisualPosition", "()I", nullptr, 0},
	{"getNavigationFilter", "()Ljavax/swing/text/NavigationFilter;", nullptr, $PROTECTED},
	{"getNextCursorPosition", "(II)I", nullptr, 0},
	{"getNextNavigatableChar", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultFormatter::*)(int32_t,int32_t)>(&DefaultFormatter::getNextNavigatableChar))},
	{"getNextVisualPositionFrom", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;I[Ljavax/swing/text/Position$Bias;)I", nullptr, 0, nullptr, "javax.swing.text.BadLocationException"},
	{"getOverwriteMode", "()Z", nullptr, $PUBLIC},
	{"getReplaceHolder", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/DefaultFormatter$ReplaceHolder;", nullptr, 0},
	{"getReplaceString", "(IILjava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"getValueClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"install", "(Ljavax/swing/JFormattedTextField;)V", nullptr, $PUBLIC},
	{"isLegalInsertText", "(Ljava/lang/String;)Z", nullptr, 0},
	{"isNavigatable", "(I)Z", nullptr, 0},
	{"isValidEdit", "(Ljavax/swing/text/DefaultFormatter$ReplaceHolder;)Z", nullptr, 0},
	{"moveDot", "(Ljavax/swing/text/NavigationFilter$FilterBypass;ILjavax/swing/text/Position$Bias;)V", nullptr, 0},
	{"positionCursorAtInitialLocation", "()V", nullptr, 0},
	{"replace", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, 0, nullptr, "javax.swing.text.BadLocationException"},
	{"replace", "(Ljavax/swing/text/DefaultFormatter$ReplaceHolder;)Z", nullptr, 0, nullptr, "javax.swing.text.BadLocationException"},
	{"repositionCursor", "(II)V", nullptr, 0},
	{"setAllowsInvalid", "(Z)V", nullptr, $PUBLIC},
	{"setCommitsOnValidEdit", "(Z)V", nullptr, $PUBLIC},
	{"setDot", "(Ljavax/swing/text/NavigationFilter$FilterBypass;ILjavax/swing/text/Position$Bias;)V", nullptr, 0},
	{"setOverwriteMode", "(Z)V", nullptr, $PUBLIC},
	{"setValueClass", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC},
	{"stringToValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateValue", "()V", nullptr, 0},
	{"updateValue", "(Ljava/lang/Object;)V", nullptr, 0},
	{"valueToString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{}
};

$InnerClassInfo _DefaultFormatter_InnerClassesInfo_[] = {
	{"javax.swing.JFormattedTextField$AbstractFormatter", "javax.swing.JFormattedTextField", "AbstractFormatter", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.text.DefaultFormatter$DefaultDocumentFilter", "javax.swing.text.DefaultFormatter", "DefaultDocumentFilter", $PRIVATE},
	{"javax.swing.text.DefaultFormatter$DefaultNavigationFilter", "javax.swing.text.DefaultFormatter", "DefaultNavigationFilter", $PRIVATE},
	{"javax.swing.text.DefaultFormatter$ReplaceHolder", "javax.swing.text.DefaultFormatter", "ReplaceHolder", $STATIC},
	{}
};

$ClassInfo _DefaultFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultFormatter",
	"javax.swing.JFormattedTextField$AbstractFormatter",
	"java.lang.Cloneable",
	_DefaultFormatter_FieldInfo_,
	_DefaultFormatter_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultFormatter$DefaultDocumentFilter,javax.swing.text.DefaultFormatter$DefaultNavigationFilter,javax.swing.text.DefaultFormatter$ReplaceHolder"
};

$Object* allocate$DefaultFormatter($Class* clazz) {
	return $of($alloc(DefaultFormatter));
}

int32_t DefaultFormatter::hashCode() {
	 return this->$JFormattedTextField$AbstractFormatter::hashCode();
}

bool DefaultFormatter::equals(Object$* arg0) {
	 return this->$JFormattedTextField$AbstractFormatter::equals(arg0);
}

$String* DefaultFormatter::toString() {
	 return this->$JFormattedTextField$AbstractFormatter::toString();
}

void DefaultFormatter::finalize() {
	this->$JFormattedTextField$AbstractFormatter::finalize();
}

$JFormattedTextField* DefaultFormatter::access$400(DefaultFormatter* x0) {
	$init(DefaultFormatter);
	return $nc(x0)->getFormattedTextField();
}

$JFormattedTextField* DefaultFormatter::access$300(DefaultFormatter* x0) {
	$init(DefaultFormatter);
	return $nc(x0)->getFormattedTextField();
}

$JFormattedTextField* DefaultFormatter::access$200(DefaultFormatter* x0) {
	$init(DefaultFormatter);
	return $nc(x0)->getFormattedTextField();
}

$JFormattedTextField* DefaultFormatter::access$100(DefaultFormatter* x0) {
	$init(DefaultFormatter);
	return $nc(x0)->getFormattedTextField();
}

$JFormattedTextField* DefaultFormatter::access$000(DefaultFormatter* x0) {
	$init(DefaultFormatter);
	return $nc(x0)->getFormattedTextField();
}

void DefaultFormatter::init$() {
	$JFormattedTextField$AbstractFormatter::init$();
	this->overwriteMode = true;
	this->allowsInvalid = true;
}

void DefaultFormatter::install($JFormattedTextField* ftf) {
	$JFormattedTextField$AbstractFormatter::install(ftf);
	positionCursorAtInitialLocation();
}

void DefaultFormatter::setCommitsOnValidEdit(bool commit) {
	this->commitOnEdit = commit;
}

bool DefaultFormatter::getCommitsOnValidEdit() {
	return this->commitOnEdit;
}

void DefaultFormatter::setOverwriteMode(bool overwriteMode) {
	this->overwriteMode = overwriteMode;
}

bool DefaultFormatter::getOverwriteMode() {
	return this->overwriteMode;
}

void DefaultFormatter::setAllowsInvalid(bool allowsInvalid) {
	this->allowsInvalid = allowsInvalid;
}

bool DefaultFormatter::getAllowsInvalid() {
	return this->allowsInvalid;
}

void DefaultFormatter::setValueClass($Class* valueClass) {
	$set(this, valueClass, valueClass);
}

$Class* DefaultFormatter::getValueClass() {
	return this->valueClass;
}

$Object* DefaultFormatter::stringToValue($String* string) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* vc = getValueClass();
	$var($JFormattedTextField, ftf, getFormattedTextField());
	if (vc == nullptr && ftf != nullptr) {
		$var($Object, value, ftf->getValue());
		if (value != nullptr) {
			vc = $of(value)->getClass();
		}
	}
	if (vc != nullptr) {
		$var($Constructor, cons, nullptr);
		try {
			$ReflectUtil::checkPackageAccess(vc);
			$SwingUtilities2::checkAccess(vc->getModifiers());
			$assign(cons, vc->getConstructor($$new($ClassArray, {$String::class$})));
		} catch ($NoSuchMethodException& nsme) {
			$assign(cons, nullptr);
		}
		if (cons != nullptr) {
			try {
				$SwingUtilities2::checkAccess(cons->getModifiers());
				return $of(cons->newInstance($$new($ObjectArray, {$of(string)})));
			} catch ($Throwable& ex) {
				$throwNew($ParseException, "Error creating instance"_s, 0);
			}
		}
	}
	return $of(string);
}

$String* DefaultFormatter::valueToString(Object$* value) {
	if (value == nullptr) {
		return ""_s;
	}
	return $nc($of(value))->toString();
}

$DocumentFilter* DefaultFormatter::getDocumentFilter() {
	if (this->documentFilter == nullptr) {
		$set(this, documentFilter, $new($DefaultFormatter$DefaultDocumentFilter, this));
	}
	return this->documentFilter;
}

$NavigationFilter* DefaultFormatter::getNavigationFilter() {
	if (this->navigationFilter == nullptr) {
		$set(this, navigationFilter, $new($DefaultFormatter$DefaultNavigationFilter, this));
	}
	return this->navigationFilter;
}

$Object* DefaultFormatter::clone() {
	$var(DefaultFormatter, formatter, $cast(DefaultFormatter, $JFormattedTextField$AbstractFormatter::clone()));
	$set($nc(formatter), navigationFilter, nullptr);
	$set(formatter, documentFilter, nullptr);
	$set(formatter, replaceHolder, nullptr);
	return $of(formatter);
}

void DefaultFormatter::positionCursorAtInitialLocation() {
	$var($JFormattedTextField, ftf, getFormattedTextField());
	if (ftf != nullptr) {
		ftf->setCaretPosition(getInitialVisualPosition());
	}
}

int32_t DefaultFormatter::getInitialVisualPosition() {
	return getNextNavigatableChar(0, 1);
}

bool DefaultFormatter::isNavigatable(int32_t offset) {
	return true;
}

bool DefaultFormatter::isLegalInsertText($String* text) {
	return true;
}

int32_t DefaultFormatter::getNextNavigatableChar(int32_t offset, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	int32_t max = $nc($($nc($(getFormattedTextField()))->getDocument()))->getLength();
	while (offset >= 0 && offset < max) {
		if (isNavigatable(offset)) {
			return offset;
		}
		offset += direction;
	}
	return offset;
}

$String* DefaultFormatter::getReplaceString(int32_t offset, int32_t deleteLength, $String* replaceString) {
	$useLocalCurrentObjectStackCache();
	$var($String, string, $nc($(getFormattedTextField()))->getText());
	$var($String, result, nullptr);
	$assign(result, $nc(string)->substring(0, offset));
	if (replaceString != nullptr) {
		$plusAssign(result, replaceString);
	}
	if (offset + deleteLength < string->length()) {
		$plusAssign(result, $(string->substring(offset + deleteLength)));
	}
	return result;
}

bool DefaultFormatter::isValidEdit($DefaultFormatter$ReplaceHolder* rh) {
	if (!getAllowsInvalid()) {
		$var($String, newString, getReplaceString($nc(rh)->offset, rh->length, rh->text));
		try {
			$set($nc(rh), value, stringToValue(newString));
			return true;
		} catch ($ParseException& pe) {
			return false;
		}
	}
	return true;
}

void DefaultFormatter::commitEdit() {
	$var($JFormattedTextField, ftf, getFormattedTextField());
	if (ftf != nullptr) {
		ftf->commitEdit();
	}
}

void DefaultFormatter::updateValue() {
	updateValue(nullptr);
}

void DefaultFormatter::updateValue(Object$* value$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, value$renamed);
	try {
		if (value == nullptr) {
			$var($String, string, $nc($(getFormattedTextField()))->getText());
			$assign(value, stringToValue(string));
		}
		if (getCommitsOnValidEdit()) {
			commitEdit();
		}
		setEditValid(true);
	} catch ($ParseException& pe) {
		setEditValid(false);
	}
}

int32_t DefaultFormatter::getNextCursorPosition(int32_t offset, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	int32_t newOffset = getNextNavigatableChar(offset, direction);
	int32_t max = $nc($($nc($(getFormattedTextField()))->getDocument()))->getLength();
	if (!getAllowsInvalid()) {
		if (direction == -1 && offset == newOffset) {
			newOffset = getNextNavigatableChar(newOffset, 1);
			if (newOffset >= max) {
				newOffset = offset;
			}
		} else if (direction == 1 && newOffset >= max) {
			newOffset = getNextNavigatableChar(max - 1, -1);
			if (newOffset < max) {
				++newOffset;
			}
		}
	}
	return newOffset;
}

void DefaultFormatter::repositionCursor(int32_t offset, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($(getFormattedTextField()))->getCaret()))->setDot(getNextCursorPosition(offset, direction));
}

int32_t DefaultFormatter::getNextVisualPositionFrom($JTextComponent* text, int32_t pos, $Position$Bias* bias, int32_t direction, $Position$BiasArray* biasRet) {
	$useLocalCurrentObjectStackCache();
	int32_t value = $nc($($cast($TextUI, $nc(text)->getUI())))->getNextVisualPositionFrom(text, pos, bias, direction, biasRet);
	if (value == -1) {
		return -1;
	}
	if (!getAllowsInvalid() && (direction == $SwingConstants::EAST || direction == $SwingConstants::WEST)) {
		int32_t last = -1;
		while (!isNavigatable(value) && value != last) {
			last = value;
			value = $nc($($cast($TextUI, text->getUI())))->getNextVisualPositionFrom(text, value, bias, direction, biasRet);
		}
		int32_t max = $nc($($nc($(getFormattedTextField()))->getDocument()))->getLength();
		if (last == value || value == max) {
			if (value == 0) {
				$init($Position$Bias);
				$nc(biasRet)->set(0, $Position$Bias::Forward);
				value = getInitialVisualPosition();
			}
			if (value >= max && max > 0) {
				$init($Position$Bias);
				$nc(biasRet)->set(0, $Position$Bias::Forward);
				value = getNextNavigatableChar(max - 1, -1) + 1;
			}
		}
	}
	return value;
}

bool DefaultFormatter::canReplace($DefaultFormatter$ReplaceHolder* rh) {
	return isValidEdit(rh);
}

void DefaultFormatter::replace($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, $AttributeSet* attrs) {
	$var($DefaultFormatter$ReplaceHolder, rh, getReplaceHolder(fb, offset, length, text, attrs));
	replace(rh);
}

bool DefaultFormatter::replace($DefaultFormatter$ReplaceHolder* rh) {
	$useLocalCurrentObjectStackCache();
	bool valid = true;
	int32_t direction = 1;
	bool var$0 = $nc(rh)->length > 0 && (rh->text == nullptr || $nc($nc(rh)->text)->length() == 0);
	if (var$0 && ($nc($(getFormattedTextField()))->getSelectionStart() != rh->offset || $nc(rh)->length > 1)) {
		direction = -1;
	}
	bool var$1 = getOverwriteMode() && $nc(rh)->text != nullptr;
	if (var$1 && $nc($(getFormattedTextField()))->getSelectedText() == nullptr) {
		int32_t var$2 = $Math::max(rh->length, $nc(rh->text)->length());
		rh->length = $Math::min(var$2, $nc($($nc(rh->fb)->getDocument()))->getLength() - rh->offset);
	}
	bool var$4 = ($nc(rh)->text != nullptr && !isLegalInsertText(rh->text));
	bool var$3 = var$4 || !canReplace(rh);
	if (var$3 || ($nc(rh)->length == 0 && (rh->text == nullptr || $nc($nc(rh)->text)->length() == 0))) {
		valid = false;
	}
	if (valid) {
		int32_t cursor = $nc(rh)->cursorPosition;
		$nc(rh->fb)->replace(rh->offset, rh->length, rh->text, rh->attrs);
		if (cursor == -1) {
			cursor = rh->offset;
			if (direction == 1 && rh->text != nullptr) {
				cursor = rh->offset + $nc(rh->text)->length();
			}
		}
		updateValue(rh->value);
		repositionCursor(cursor, direction);
		return true;
	} else {
		invalidEdit();
	}
	return false;
}

void DefaultFormatter::setDot($NavigationFilter$FilterBypass* fb, int32_t dot, $Position$Bias* bias) {
	$nc(fb)->setDot(dot, bias);
}

void DefaultFormatter::moveDot($NavigationFilter$FilterBypass* fb, int32_t dot, $Position$Bias* bias) {
	$nc(fb)->moveDot(dot, bias);
}

$DefaultFormatter$ReplaceHolder* DefaultFormatter::getReplaceHolder($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, $AttributeSet* attrs) {
	if (this->replaceHolder == nullptr) {
		$set(this, replaceHolder, $new($DefaultFormatter$ReplaceHolder));
	}
	$nc(this->replaceHolder)->reset(fb, offset, length, text, attrs);
	return this->replaceHolder;
}

DefaultFormatter::DefaultFormatter() {
}

$Class* DefaultFormatter::load$($String* name, bool initialize) {
	$loadClass(DefaultFormatter, name, initialize, &_DefaultFormatter_ClassInfo_, allocate$DefaultFormatter);
	return class$;
}

$Class* DefaultFormatter::class$ = nullptr;

		} // text
	} // swing
} // javax