#include <com/sun/media/sound/DLSSoundbank$DLSID.h>

#include <com/sun/media/sound/DLSSoundbank.h>
#include <com/sun/media/sound/RIFFReader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DLSSoundbank = ::com::sun::media::sound::DLSSoundbank;
using $RIFFReader = ::com::sun::media::sound::RIFFReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DLSSoundbank$DLSID_FieldInfo_[] = {
	{"i1", "J", nullptr, 0, $field(DLSSoundbank$DLSID, i1)},
	{"s1", "I", nullptr, 0, $field(DLSSoundbank$DLSID, s1)},
	{"s2", "I", nullptr, 0, $field(DLSSoundbank$DLSID, s2)},
	{"x1", "I", nullptr, 0, $field(DLSSoundbank$DLSID, x1)},
	{"x2", "I", nullptr, 0, $field(DLSSoundbank$DLSID, x2)},
	{"x3", "I", nullptr, 0, $field(DLSSoundbank$DLSID, x3)},
	{"x4", "I", nullptr, 0, $field(DLSSoundbank$DLSID, x4)},
	{"x5", "I", nullptr, 0, $field(DLSSoundbank$DLSID, x5)},
	{"x6", "I", nullptr, 0, $field(DLSSoundbank$DLSID, x6)},
	{"x7", "I", nullptr, 0, $field(DLSSoundbank$DLSID, x7)},
	{"x8", "I", nullptr, 0, $field(DLSSoundbank$DLSID, x8)},
	{}
};

$MethodInfo _DLSSoundbank$DLSID_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DLSSoundbank$DLSID::*)()>(&DLSSoundbank$DLSID::init$))},
	{"<init>", "(JIIIIIIIIII)V", nullptr, 0, $method(static_cast<void(DLSSoundbank$DLSID::*)(int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&DLSSoundbank$DLSID::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"read", "(Lcom/sun/media/sound/RIFFReader;)Lcom/sun/media/sound/DLSSoundbank$DLSID;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DLSSoundbank$DLSID*(*)($RIFFReader*)>(&DLSSoundbank$DLSID::read)), "java.io.IOException"},
	{}
};

$InnerClassInfo _DLSSoundbank$DLSID_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DLSSoundbank$DLSID", "com.sun.media.sound.DLSSoundbank", "DLSID", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DLSSoundbank$DLSID_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.DLSSoundbank$DLSID",
	"java.lang.Object",
	nullptr,
	_DLSSoundbank$DLSID_FieldInfo_,
	_DLSSoundbank$DLSID_MethodInfo_,
	nullptr,
	nullptr,
	_DLSSoundbank$DLSID_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.DLSSoundbank"
};

$Object* allocate$DLSSoundbank$DLSID($Class* clazz) {
	return $of($alloc(DLSSoundbank$DLSID));
}

void DLSSoundbank$DLSID::init$() {
}

void DLSSoundbank$DLSID::init$(int64_t i1, int32_t s1, int32_t s2, int32_t x1, int32_t x2, int32_t x3, int32_t x4, int32_t x5, int32_t x6, int32_t x7, int32_t x8) {
	this->i1 = i1;
	this->s1 = s1;
	this->s2 = s2;
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->x4 = x4;
	this->x5 = x5;
	this->x6 = x6;
	this->x7 = x7;
	this->x8 = x8;
}

DLSSoundbank$DLSID* DLSSoundbank$DLSID::read($RIFFReader* riff) {
	$var(DLSSoundbank$DLSID, d, $new(DLSSoundbank$DLSID));
	d->i1 = $nc(riff)->readUnsignedInt();
	d->s1 = riff->readUnsignedShort();
	d->s2 = riff->readUnsignedShort();
	d->x1 = riff->readUnsignedByte();
	d->x2 = riff->readUnsignedByte();
	d->x3 = riff->readUnsignedByte();
	d->x4 = riff->readUnsignedByte();
	d->x5 = riff->readUnsignedByte();
	d->x6 = riff->readUnsignedByte();
	d->x7 = riff->readUnsignedByte();
	d->x8 = riff->readUnsignedByte();
	return d;
}

int32_t DLSSoundbank$DLSID::hashCode() {
	return (int32_t)this->i1;
}

bool DLSSoundbank$DLSID::equals(Object$* obj) {
	if (!($instanceOf(DLSSoundbank$DLSID, obj))) {
		return false;
	}
	$var(DLSSoundbank$DLSID, t, $cast(DLSSoundbank$DLSID, obj));
	return this->i1 == $nc(t)->i1 && this->s1 == t->s1 && this->s2 == t->s2 && this->x1 == t->x1 && this->x2 == t->x2 && this->x3 == t->x3 && this->x4 == t->x4 && this->x5 == t->x5 && this->x6 == t->x6 && this->x7 == t->x7 && this->x8 == t->x8;
}

DLSSoundbank$DLSID::DLSSoundbank$DLSID() {
}

$Class* DLSSoundbank$DLSID::load$($String* name, bool initialize) {
	$loadClass(DLSSoundbank$DLSID, name, initialize, &_DLSSoundbank$DLSID_ClassInfo_, allocate$DLSSoundbank$DLSID);
	return class$;
}

$Class* DLSSoundbank$DLSID::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com