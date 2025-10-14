#include <sun/java2d/cmm/CMSManager$CMMTracer.h>

#include <java/awt/color/ICC_Profile.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/cmm/CMSManager.h>
#include <sun/java2d/cmm/ColorTransform.h>
#include <sun/java2d/cmm/PCMM.h>
#include <sun/java2d/cmm/Profile.h>
#include <jcpp.h>

using $ColorTransformArray = $Array<::sun::java2d::cmm::ColorTransform>;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CMSManager = ::sun::java2d::cmm::CMSManager;
using $ColorTransform = ::sun::java2d::cmm::ColorTransform;
using $PCMM = ::sun::java2d::cmm::PCMM;
using $Profile = ::sun::java2d::cmm::Profile;

namespace sun {
	namespace java2d {
		namespace cmm {

$FieldInfo _CMSManager$CMMTracer_FieldInfo_[] = {
	{"tcmm", "Lsun/java2d/cmm/PCMM;", nullptr, 0, $field(CMSManager$CMMTracer, tcmm)},
	{"cName", "Ljava/lang/String;", nullptr, 0, $field(CMSManager$CMMTracer, cName)},
	{}
};

$MethodInfo _CMSManager$CMMTracer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/cmm/PCMM;)V", nullptr, $PUBLIC, $method(static_cast<void(CMSManager$CMMTracer::*)($PCMM*)>(&CMSManager$CMMTracer::init$))},
	{"createTransform", "(Ljava/awt/color/ICC_Profile;II)Lsun/java2d/cmm/ColorTransform;", nullptr, $PUBLIC},
	{"createTransform", "([Lsun/java2d/cmm/ColorTransform;)Lsun/java2d/cmm/ColorTransform;", nullptr, $PUBLIC},
	{"getProfileData", "(Lsun/java2d/cmm/Profile;)[B", nullptr, $PUBLIC},
	{"getTagData", "(Lsun/java2d/cmm/Profile;I)[B", nullptr, $PUBLIC},
	{"loadProfile", "([B)Lsun/java2d/cmm/Profile;", nullptr, $PUBLIC},
	{"setTagData", "(Lsun/java2d/cmm/Profile;I[B)V", nullptr, $PUBLIC},
	{"signatureToString", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&CMSManager$CMMTracer::signatureToString))},
	{}
};

$InnerClassInfo _CMSManager$CMMTracer_InnerClassesInfo_[] = {
	{"sun.java2d.cmm.CMSManager$CMMTracer", "sun.java2d.cmm.CMSManager", "CMMTracer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CMSManager$CMMTracer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.cmm.CMSManager$CMMTracer",
	"java.lang.Object",
	"sun.java2d.cmm.PCMM",
	_CMSManager$CMMTracer_FieldInfo_,
	_CMSManager$CMMTracer_MethodInfo_,
	nullptr,
	nullptr,
	_CMSManager$CMMTracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.cmm.CMSManager"
};

$Object* allocate$CMSManager$CMMTracer($Class* clazz) {
	return $of($alloc(CMSManager$CMMTracer));
}

void CMSManager$CMMTracer::init$($PCMM* tcmm) {
	$set(this, tcmm, tcmm);
	$set(this, cName, $nc($of(tcmm))->getClass()->getName());
}

$Profile* CMSManager$CMMTracer::loadProfile($bytes* data) {
	$init($System);
	$nc($System::err)->print($$str({this->cName, ".loadProfile"_s}));
	$var($Profile, p, $nc(this->tcmm)->loadProfile(data));
	$nc($System::err)->printf("(ID=%s)\n"_s, $$new($ObjectArray, {$($of($nc($of(p))->toString()))}));
	return p;
}

$bytes* CMSManager$CMMTracer::getProfileData($Profile* p) {
	$init($System);
	$nc($System::err)->print($$str({this->cName, ".getProfileData(ID="_s, p, ") "_s}));
	$var($bytes, data, $nc(this->tcmm)->getProfileData(p));
	$nc($System::err)->println($$str({"requested "_s, $$str($nc(data)->length), " byte(s)"_s}));
	return data;
}

$bytes* CMSManager$CMMTracer::getTagData($Profile* p, int32_t tagSignature) {
	$init($System);
	$nc($System::err)->printf($$str({this->cName, ".getTagData(ID=%x, TagSig=%s)"_s}), $$new($ObjectArray, {
		$of(p),
		$($of(signatureToString(tagSignature)))
	}));
	$var($bytes, data, $nc(this->tcmm)->getTagData(p, tagSignature));
	$nc($System::err)->println($$str({" requested "_s, $$str($nc(data)->length), " byte(s)"_s}));
	return data;
}

void CMSManager$CMMTracer::setTagData($Profile* p, int32_t tagSignature, $bytes* data) {
	$init($System);
	$nc($System::err)->print($$str({this->cName, ".setTagData(ID="_s, p, ", TagSig="_s, $$str(tagSignature), ")"_s}));
	$nc($System::err)->println($$str({" sending "_s, $$str($nc(data)->length), " byte(s)"_s}));
	$nc(this->tcmm)->setTagData(p, tagSignature, data);
}

$ColorTransform* CMSManager$CMMTracer::createTransform($ICC_Profile* profile, int32_t renderType, int32_t transformType) {
	$init($System);
	$nc($System::err)->println($$str({this->cName, ".createTransform(ICC_Profile,int,int)"_s}));
	return $nc(this->tcmm)->createTransform(profile, renderType, transformType);
}

$ColorTransform* CMSManager$CMMTracer::createTransform($ColorTransformArray* transforms) {
	$init($System);
	$nc($System::err)->println($$str({this->cName, ".createTransform(ColorTransform[])"_s}));
	return $nc(this->tcmm)->createTransform(transforms);
}

$String* CMSManager$CMMTracer::signatureToString(int32_t sig) {
	$init(CMSManager$CMMTracer);
	return $String::format("%c%c%c%c"_s, $$new($ObjectArray, {
		$($of($Character::valueOf((char16_t)((int32_t)(255 & (uint32_t)(sig >> 24)))))),
		$($of($Character::valueOf((char16_t)((int32_t)(255 & (uint32_t)(sig >> 16)))))),
		$($of($Character::valueOf((char16_t)((int32_t)(255 & (uint32_t)(sig >> 8)))))),
		$($of($Character::valueOf((char16_t)((int32_t)(255 & (uint32_t)(sig))))))
	}));
}

CMSManager$CMMTracer::CMSManager$CMMTracer() {
}

$Class* CMSManager$CMMTracer::load$($String* name, bool initialize) {
	$loadClass(CMSManager$CMMTracer, name, initialize, &_CMSManager$CMMTracer_ClassInfo_, allocate$CMSManager$CMMTracer);
	return class$;
}

$Class* CMSManager$CMMTracer::class$ = nullptr;

		} // cmm
	} // java2d
} // sun