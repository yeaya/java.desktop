#include <com/sun/media/sound/SoftChannel$3.h>

#include <com/sun/media/sound/SoftChannel.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $SoftChannel = ::com::sun::media::sound::SoftChannel;
using $SoftControl = ::com::sun::media::sound::SoftControl;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftChannel$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftChannel;", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$3, this$0)},
	{"nrpn", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[D>;", 0, $field(SoftChannel$3, nrpn)},
	{}
};

$MethodInfo _SoftChannel$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftChannel;)V", nullptr, 0, $method(static_cast<void(SoftChannel$3::*)($SoftChannel*)>(&SoftChannel$3::init$))},
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftChannel$3_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftChannel",
	nullptr,
	nullptr
};

$InnerClassInfo _SoftChannel$3_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftChannel$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftChannel$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftChannel$3",
	"java.lang.Object",
	"com.sun.media.sound.SoftControl",
	_SoftChannel$3_FieldInfo_,
	_SoftChannel$3_MethodInfo_,
	nullptr,
	&_SoftChannel$3_EnclosingMethodInfo_,
	_SoftChannel$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftChannel"
};

$Object* allocate$SoftChannel$3($Class* clazz) {
	return $of($alloc(SoftChannel$3));
}

void SoftChannel$3::init$($SoftChannel* this$0) {
	$set(this, this$0, this$0);
	$set(this, nrpn, this->this$0->co_midi_nrpn_nrpn);
}

$doubles* SoftChannel$3::get(int32_t instance, $String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		return nullptr;
	}
	int32_t iname = $Integer::parseInt(name);
	$var($doubles, v, $cast($doubles, $nc(this->nrpn)->get($($Integer::valueOf(iname)))));
	if (v == nullptr) {
		$assign(v, $new($doubles, 1));
		$nc(this->nrpn)->put($($Integer::valueOf(iname)), v);
	}
	return v;
}

SoftChannel$3::SoftChannel$3() {
}

$Class* SoftChannel$3::load$($String* name, bool initialize) {
	$loadClass(SoftChannel$3, name, initialize, &_SoftChannel$3_ClassInfo_, allocate$SoftChannel$3);
	return class$;
}

$Class* SoftChannel$3::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com