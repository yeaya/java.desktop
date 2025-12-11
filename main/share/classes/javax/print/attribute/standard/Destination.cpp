#include <javax/print/attribute/standard/Destination.h>

#include <java/net/URI.h>
#include <javax/print/attribute/URISyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URISyntax = ::javax::print::attribute::URISyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _Destination_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Destination, serialVersionUID)},
	{}
};

$MethodInfo _Destination_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(static_cast<void(Destination::*)($URI*)>(&Destination::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Destination_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.Destination",
	"javax.print.attribute.URISyntax",
	"javax.print.attribute.PrintJobAttribute,javax.print.attribute.PrintRequestAttribute",
	_Destination_FieldInfo_,
	_Destination_MethodInfo_
};

$Object* allocate$Destination($Class* clazz) {
	return $of($alloc(Destination));
}

int32_t Destination::hashCode() {
	 return this->$URISyntax::hashCode();
}

$String* Destination::toString() {
	 return this->$URISyntax::toString();
}

$Object* Destination::clone() {
	 return this->$URISyntax::clone();
}

void Destination::finalize() {
	this->$URISyntax::finalize();
}

void Destination::init$($URI* uri) {
	$URISyntax::init$(uri);
}

bool Destination::equals(Object$* object) {
	return ($URISyntax::equals(object) && $instanceOf(Destination, object));
}

$Class* Destination::getCategory() {
	return Destination::class$;
}

$String* Destination::getName() {
	return "spool-data-destination"_s;
}

Destination::Destination() {
}

$Class* Destination::load$($String* name, bool initialize) {
	$loadClass(Destination, name, initialize, &_Destination_ClassInfo_, allocate$Destination);
	return class$;
}

$Class* Destination::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax