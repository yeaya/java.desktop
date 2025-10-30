#include <javax/print/attribute/standard/Media.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _Media_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Media, serialVersionUID)},
	{}
};

$MethodInfo _Media_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(Media::*)(int32_t)>(&Media::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Media_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.attribute.standard.Media",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_Media_FieldInfo_,
	_Media_MethodInfo_
};

$Object* allocate$Media($Class* clazz) {
	return $of($alloc(Media));
}

$Object* Media::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t Media::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* Media::toString() {
	 return this->$EnumSyntax::toString();
}

void Media::finalize() {
	this->$EnumSyntax::finalize();
}

void Media::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

bool Media::equals(Object$* object) {
	bool var$1 = object != nullptr && $instanceOf(Media, object);
	if (var$1) {
		var$1 = $of(object)->getClass() == $of(this)->getClass();
	}
	bool var$0 = var$1;
	if (var$0) {
		int32_t var$2 = $nc(($cast(Media, object)))->getValue();
		var$0 = var$2 == this->getValue();
	}
	return (var$0);
}

$Class* Media::getCategory() {
	return Media::class$;
}

$String* Media::getName() {
	return "media"_s;
}

Media::Media() {
}

$Class* Media::load$($String* name, bool initialize) {
	$loadClass(Media, name, initialize, &_Media_ClassInfo_, allocate$Media);
	return class$;
}

$Class* Media::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax