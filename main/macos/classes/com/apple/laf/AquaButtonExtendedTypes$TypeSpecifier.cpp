#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>

#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaButtonExtendedTypes$TypeSpecifier_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaButtonExtendedTypes$TypeSpecifier, name)},
	{"setIconFont", "Z", nullptr, $FINAL, $field(AquaButtonExtendedTypes$TypeSpecifier, setIconFont)},
	{}
};

$MethodInfo _AquaButtonExtendedTypes$TypeSpecifier_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(AquaButtonExtendedTypes$TypeSpecifier::*)($String*,bool)>(&AquaButtonExtendedTypes$TypeSpecifier::init$))},
	{"getBorder", "()Ljavax/swing/border/Border;", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _AquaButtonExtendedTypes$TypeSpecifier_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaButtonExtendedTypes$TypeSpecifier_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier",
	"java.lang.Object",
	nullptr,
	_AquaButtonExtendedTypes$TypeSpecifier_FieldInfo_,
	_AquaButtonExtendedTypes$TypeSpecifier_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$TypeSpecifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonExtendedTypes"
};

$Object* allocate$AquaButtonExtendedTypes$TypeSpecifier($Class* clazz) {
	return $of($alloc(AquaButtonExtendedTypes$TypeSpecifier));
}

void AquaButtonExtendedTypes$TypeSpecifier::init$($String* name, bool setIconFont) {
	$set(this, name, name);
	this->setIconFont = setIconFont;
}

AquaButtonExtendedTypes$TypeSpecifier::AquaButtonExtendedTypes$TypeSpecifier() {
}

$Class* AquaButtonExtendedTypes$TypeSpecifier::load$($String* name, bool initialize) {
	$loadClass(AquaButtonExtendedTypes$TypeSpecifier, name, initialize, &_AquaButtonExtendedTypes$TypeSpecifier_ClassInfo_, allocate$AquaButtonExtendedTypes$TypeSpecifier);
	return class$;
}

$Class* AquaButtonExtendedTypes$TypeSpecifier::class$ = nullptr;

		} // laf
	} // apple
} // com