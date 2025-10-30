#include <sun/print/PrintJobAttributeException.h>

#include <javax/print/PrintException.h>
#include <javax/print/attribute/Attribute.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeException = ::javax::print::AttributeException;
using $PrintException = ::javax::print::PrintException;
using $Attribute = ::javax::print::attribute::Attribute;

namespace sun {
	namespace print {

$FieldInfo _PrintJobAttributeException_FieldInfo_[] = {
	{"attr", "Ljavax/print/attribute/Attribute;", nullptr, $PRIVATE, $field(PrintJobAttributeException, attr)},
	{"category", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(PrintJobAttributeException, category)},
	{}
};

$MethodInfo _PrintJobAttributeException_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;Ljavax/print/attribute/Attribute;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljavax/print/attribute/Attribute;)V", 0, $method(static_cast<void(PrintJobAttributeException::*)($String*,$Class*,$Attribute*)>(&PrintJobAttributeException::init$))},
	{"getUnsupportedAttributes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC},
	{"getUnsupportedValues", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrintJobAttributeException_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PrintJobAttributeException",
	"javax.print.PrintException",
	"javax.print.AttributeException",
	_PrintJobAttributeException_FieldInfo_,
	_PrintJobAttributeException_MethodInfo_
};

$Object* allocate$PrintJobAttributeException($Class* clazz) {
	return $of($alloc(PrintJobAttributeException));
}

$String* PrintJobAttributeException::toString() {
	 return this->$PrintException::toString();
}

int32_t PrintJobAttributeException::hashCode() {
	 return this->$PrintException::hashCode();
}

bool PrintJobAttributeException::equals(Object$* arg0) {
	 return this->$PrintException::equals(arg0);
}

$Object* PrintJobAttributeException::clone() {
	 return this->$PrintException::clone();
}

void PrintJobAttributeException::finalize() {
	this->$PrintException::finalize();
}

void PrintJobAttributeException::init$($String* s, $Class* cat, $Attribute* attrval) {
	$PrintException::init$(s);
	$set(this, attr, attrval);
	$set(this, category, cat);
}

$ClassArray* PrintJobAttributeException::getUnsupportedAttributes() {
	if (this->category == nullptr) {
		return nullptr;
	} else {
		$var($ClassArray, cats, $new($ClassArray, {this->category}));
		return cats;
	}
}

$AttributeArray* PrintJobAttributeException::getUnsupportedValues() {
	if (this->attr == nullptr) {
		return nullptr;
	} else {
		$var($AttributeArray, attrs, $new($AttributeArray, {this->attr}));
		return attrs;
	}
}

PrintJobAttributeException::PrintJobAttributeException() {
}

PrintJobAttributeException::PrintJobAttributeException(const PrintJobAttributeException& e) : $PrintException(e) {
}

void PrintJobAttributeException::throw$() {
	throw *this;
}

$Class* PrintJobAttributeException::load$($String* name, bool initialize) {
	$loadClass(PrintJobAttributeException, name, initialize, &_PrintJobAttributeException_ClassInfo_, allocate$PrintJobAttributeException);
	return class$;
}

$Class* PrintJobAttributeException::class$ = nullptr;

	} // print
} // sun