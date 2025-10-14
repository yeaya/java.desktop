#include <com/sun/media/sound/WaveExtensibleFileReader$GUID.h>

#include <com/sun/media/sound/RIFFReader.h>
#include <com/sun/media/sound/WaveExtensibleFileReader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $RIFFReader = ::com::sun::media::sound::RIFFReader;
using $WaveExtensibleFileReader = ::com::sun::media::sound::WaveExtensibleFileReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _WaveExtensibleFileReader$GUID_FieldInfo_[] = {
	{"i1", "J", nullptr, $PRIVATE, $field(WaveExtensibleFileReader$GUID, i1)},
	{"s1", "I", nullptr, $PRIVATE, $field(WaveExtensibleFileReader$GUID, s1)},
	{"s2", "I", nullptr, $PRIVATE, $field(WaveExtensibleFileReader$GUID, s2)},
	{"x1", "I", nullptr, $PRIVATE, $field(WaveExtensibleFileReader$GUID, x1)},
	{"x2", "I", nullptr, $PRIVATE, $field(WaveExtensibleFileReader$GUID, x2)},
	{"x3", "I", nullptr, $PRIVATE, $field(WaveExtensibleFileReader$GUID, x3)},
	{"x4", "I", nullptr, $PRIVATE, $field(WaveExtensibleFileReader$GUID, x4)},
	{"x5", "I", nullptr, $PRIVATE, $field(WaveExtensibleFileReader$GUID, x5)},
	{"x6", "I", nullptr, $PRIVATE, $field(WaveExtensibleFileReader$GUID, x6)},
	{"x7", "I", nullptr, $PRIVATE, $field(WaveExtensibleFileReader$GUID, x7)},
	{"x8", "I", nullptr, $PRIVATE, $field(WaveExtensibleFileReader$GUID, x8)},
	{}
};

$MethodInfo _WaveExtensibleFileReader$GUID_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WaveExtensibleFileReader$GUID::*)()>(&WaveExtensibleFileReader$GUID::init$))},
	{"<init>", "(JIIIIIIIIII)V", nullptr, 0, $method(static_cast<void(WaveExtensibleFileReader$GUID::*)(int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&WaveExtensibleFileReader$GUID::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"read", "(Lcom/sun/media/sound/RIFFReader;)Lcom/sun/media/sound/WaveExtensibleFileReader$GUID;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WaveExtensibleFileReader$GUID*(*)($RIFFReader*)>(&WaveExtensibleFileReader$GUID::read)), "java.io.IOException"},
	{}
};

$InnerClassInfo _WaveExtensibleFileReader$GUID_InnerClassesInfo_[] = {
	{"com.sun.media.sound.WaveExtensibleFileReader$GUID", "com.sun.media.sound.WaveExtensibleFileReader", "GUID", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _WaveExtensibleFileReader$GUID_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.WaveExtensibleFileReader$GUID",
	"java.lang.Object",
	nullptr,
	_WaveExtensibleFileReader$GUID_FieldInfo_,
	_WaveExtensibleFileReader$GUID_MethodInfo_,
	nullptr,
	nullptr,
	_WaveExtensibleFileReader$GUID_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.WaveExtensibleFileReader"
};

$Object* allocate$WaveExtensibleFileReader$GUID($Class* clazz) {
	return $of($alloc(WaveExtensibleFileReader$GUID));
}

void WaveExtensibleFileReader$GUID::init$() {
}

void WaveExtensibleFileReader$GUID::init$(int64_t i1, int32_t s1, int32_t s2, int32_t x1, int32_t x2, int32_t x3, int32_t x4, int32_t x5, int32_t x6, int32_t x7, int32_t x8) {
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

WaveExtensibleFileReader$GUID* WaveExtensibleFileReader$GUID::read($RIFFReader* riff) {
	$var(WaveExtensibleFileReader$GUID, d, $new(WaveExtensibleFileReader$GUID));
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

int32_t WaveExtensibleFileReader$GUID::hashCode() {
	return (int32_t)this->i1;
}

bool WaveExtensibleFileReader$GUID::equals(Object$* obj) {
	if (!($instanceOf(WaveExtensibleFileReader$GUID, obj))) {
		return false;
	}
	$var(WaveExtensibleFileReader$GUID, t, $cast(WaveExtensibleFileReader$GUID, obj));
	if (this->i1 != $nc(t)->i1) {
		return false;
	}
	if (this->s1 != $nc(t)->s1) {
		return false;
	}
	if (this->s2 != $nc(t)->s2) {
		return false;
	}
	if (this->x1 != $nc(t)->x1) {
		return false;
	}
	if (this->x2 != $nc(t)->x2) {
		return false;
	}
	if (this->x3 != $nc(t)->x3) {
		return false;
	}
	if (this->x4 != $nc(t)->x4) {
		return false;
	}
	if (this->x5 != $nc(t)->x5) {
		return false;
	}
	if (this->x6 != $nc(t)->x6) {
		return false;
	}
	if (this->x7 != $nc(t)->x7) {
		return false;
	}
	if (this->x8 != $nc(t)->x8) {
		return false;
	}
	return true;
}

WaveExtensibleFileReader$GUID::WaveExtensibleFileReader$GUID() {
}

$Class* WaveExtensibleFileReader$GUID::load$($String* name, bool initialize) {
	$loadClass(WaveExtensibleFileReader$GUID, name, initialize, &_WaveExtensibleFileReader$GUID_ClassInfo_, allocate$WaveExtensibleFileReader$GUID);
	return class$;
}

$Class* WaveExtensibleFileReader$GUID::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com