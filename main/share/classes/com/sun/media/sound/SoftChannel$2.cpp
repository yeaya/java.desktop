#include <com/sun/media/sound/SoftChannel$2.h>

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

$FieldInfo _SoftChannel$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftChannel;", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$2, this$0)},
	{"rpn", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[D>;", 0, $field(SoftChannel$2, rpn)},
	{}
};

$MethodInfo _SoftChannel$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftChannel;)V", nullptr, 0, $method(static_cast<void(SoftChannel$2::*)($SoftChannel*)>(&SoftChannel$2::init$))},
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftChannel$2_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftChannel",
	nullptr,
	nullptr
};

$InnerClassInfo _SoftChannel$2_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftChannel$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftChannel$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftChannel$2",
	"java.lang.Object",
	"com.sun.media.sound.SoftControl",
	_SoftChannel$2_FieldInfo_,
	_SoftChannel$2_MethodInfo_,
	nullptr,
	&_SoftChannel$2_EnclosingMethodInfo_,
	_SoftChannel$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftChannel"
};

$Object* allocate$SoftChannel$2($Class* clazz) {
	return $of($alloc(SoftChannel$2));
}

void SoftChannel$2::init$($SoftChannel* this$0) {
	$set(this, this$0, this$0);
	$set(this, rpn, this->this$0->co_midi_rpn_rpn);
}

$doubles* SoftChannel$2::get(int32_t instance, $String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		return nullptr;
	}
	int32_t iname = $Integer::parseInt(name);
	$var($doubles, v, $cast($doubles, $nc(this->rpn)->get($($Integer::valueOf(iname)))));
	if (v == nullptr) {
		$assign(v, $new($doubles, 1));
		$nc(this->rpn)->put($($Integer::valueOf(iname)), v);
	}
	return v;
}

SoftChannel$2::SoftChannel$2() {
}

$Class* SoftChannel$2::load$($String* name, bool initialize) {
	$loadClass(SoftChannel$2, name, initialize, &_SoftChannel$2_ClassInfo_, allocate$SoftChannel$2);
	return class$;
}

$Class* SoftChannel$2::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com