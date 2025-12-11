#include <javax/print/attribute/ResolutionSyntax.h>

#include <java/io/Serializable.h>
#include <jcpp.h>

#undef DPCM
#undef DPI

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _ResolutionSyntax_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolutionSyntax, serialVersionUID)},
	{"crossFeedResolution", "I", nullptr, $PRIVATE, $field(ResolutionSyntax, crossFeedResolution)},
	{"feedResolution", "I", nullptr, $PRIVATE, $field(ResolutionSyntax, feedResolution)},
	{"DPI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResolutionSyntax, DPI)},
	{"DPCM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResolutionSyntax, DPCM)},
	{}
};

$MethodInfo _ResolutionSyntax_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(ResolutionSyntax::*)(int32_t,int32_t,int32_t)>(&ResolutionSyntax::init$))},
	{"convertFromDphi", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&ResolutionSyntax::convertFromDphi))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCrossFeedResolution", "(I)I", nullptr, $PUBLIC},
	{"getCrossFeedResolutionDphi", "()I", nullptr, $PROTECTED},
	{"getFeedResolution", "(I)I", nullptr, $PUBLIC},
	{"getFeedResolutionDphi", "()I", nullptr, $PROTECTED},
	{"getResolution", "(I)[I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"lessThanOrEquals", "(Ljavax/print/attribute/ResolutionSyntax;)Z", nullptr, $PUBLIC},
	{"toString", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ResolutionSyntax_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.attribute.ResolutionSyntax",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Cloneable",
	_ResolutionSyntax_FieldInfo_,
	_ResolutionSyntax_MethodInfo_
};

$Object* allocate$ResolutionSyntax($Class* clazz) {
	return $of($alloc(ResolutionSyntax));
}

$Object* ResolutionSyntax::clone() {
	 return this->$Serializable::clone();
}

void ResolutionSyntax::finalize() {
	this->$Serializable::finalize();
}

void ResolutionSyntax::init$(int32_t crossFeedResolution, int32_t feedResolution, int32_t units) {
	if (crossFeedResolution < 1) {
		$throwNew($IllegalArgumentException, "crossFeedResolution is < 1"_s);
	}
	if (feedResolution < 1) {
		$throwNew($IllegalArgumentException, "feedResolution is < 1"_s);
	}
	if (units < 1) {
		$throwNew($IllegalArgumentException, "units is < 1"_s);
	}
	this->crossFeedResolution = crossFeedResolution * units;
	this->feedResolution = feedResolution * units;
}

int32_t ResolutionSyntax::convertFromDphi(int32_t dphi, int32_t units) {
	$init(ResolutionSyntax);
	if (units < 1) {
		$throwNew($IllegalArgumentException, ": units is < 1"_s);
	}
	int32_t round = units / 2;
	return $div((dphi + round), units);
}

$ints* ResolutionSyntax::getResolution(int32_t units) {
	return $new($ints, {
		getCrossFeedResolution(units),
		getFeedResolution(units)
	});
}

int32_t ResolutionSyntax::getCrossFeedResolution(int32_t units) {
	return convertFromDphi(this->crossFeedResolution, units);
}

int32_t ResolutionSyntax::getFeedResolution(int32_t units) {
	return convertFromDphi(this->feedResolution, units);
}

$String* ResolutionSyntax::toString(int32_t units, $String* unitsName) {
	$var($StringBuilder, result, $new($StringBuilder));
	result->append(getCrossFeedResolution(units));
	result->append(u'x');
	result->append(getFeedResolution(units));
	if (unitsName != nullptr) {
		result->append(u' ');
		result->append(unitsName);
	}
	return result->toString();
}

bool ResolutionSyntax::lessThanOrEquals(ResolutionSyntax* other) {
	return (this->crossFeedResolution <= $nc(other)->crossFeedResolution && this->feedResolution <= other->feedResolution);
}

bool ResolutionSyntax::equals(Object$* object) {
	return (object != nullptr && $instanceOf(ResolutionSyntax, object) && this->crossFeedResolution == $nc(($cast(ResolutionSyntax, object)))->crossFeedResolution && this->feedResolution == ($cast(ResolutionSyntax, object))->feedResolution);
}

int32_t ResolutionSyntax::hashCode() {
	return (((int32_t)(this->crossFeedResolution & (uint32_t)0x0000FFFF)) | (((int32_t)(this->feedResolution & (uint32_t)0x0000FFFF)) << 16));
}

$String* ResolutionSyntax::toString() {
	$var($StringBuilder, result, $new($StringBuilder));
	result->append(this->crossFeedResolution);
	result->append(u'x');
	result->append(this->feedResolution);
	result->append(" dphi"_s);
	return result->toString();
}

int32_t ResolutionSyntax::getCrossFeedResolutionDphi() {
	return this->crossFeedResolution;
}

int32_t ResolutionSyntax::getFeedResolutionDphi() {
	return this->feedResolution;
}

ResolutionSyntax::ResolutionSyntax() {
}

$Class* ResolutionSyntax::load$($String* name, bool initialize) {
	$loadClass(ResolutionSyntax, name, initialize, &_ResolutionSyntax_ClassInfo_, allocate$ResolutionSyntax);
	return class$;
}

$Class* ResolutionSyntax::class$ = nullptr;

		} // attribute
	} // print
} // javax