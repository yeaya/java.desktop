#ifndef _com_sun_media_sound_SoftPerformer_h_
#define _com_sun_media_sound_SoftPerformer_h_
//$ class com.sun.media.sound.SoftPerformer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelConnectionBlock;
				class ModelOscillator;
				class ModelPerformer;
				class ModelSource;
				class ModelTransform;
				class SoftPerformer$KeySortComparator;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftPerformer : public ::java::lang::Object {
	$class(SoftPerformer, 0, ::java::lang::Object)
public:
	SoftPerformer();
	void init$(::com::sun::media::sound::ModelPerformer* performer);
	$String* extractKeys(::com::sun::media::sound::ModelConnectionBlock* conn);
	static bool isUnnecessaryTransform(::com::sun::media::sound::ModelTransform* transform);
	void processMidiControlSource(::com::sun::media::sound::ModelSource* src, int32_t ix);
	void processMidiNrpnSource(::com::sun::media::sound::ModelSource* src, int32_t ix);
	void processMidiRpnSource(::com::sun::media::sound::ModelSource* src, int32_t ix);
	void processMidiSource(::com::sun::media::sound::ModelSource* src, int32_t ix);
	void processNoteOnSource(::com::sun::media::sound::ModelSource* src, int32_t ix);
	void processSource(::com::sun::media::sound::ModelSource* src, int32_t ix);
	static $Array<::com::sun::media::sound::ModelConnectionBlock>* defaultconnections;
	int32_t keyFrom = 0;
	int32_t keyTo = 0;
	int32_t velFrom = 0;
	int32_t velTo = 0;
	int32_t exclusiveClass = 0;
	bool selfNonExclusive = false;
	bool forcedVelocity = false;
	bool forcedKeynumber = false;
	::com::sun::media::sound::ModelPerformer* performer = nullptr;
	$Array<::com::sun::media::sound::ModelConnectionBlock>* connections = nullptr;
	$Array<::com::sun::media::sound::ModelOscillator>* oscillators = nullptr;
	::java::util::Map* midi_rpn_connections = nullptr;
	::java::util::Map* midi_nrpn_connections = nullptr;
	$Array<int32_t, 2>* midi_ctrl_connections = nullptr;
	$Array<int32_t, 2>* midi_connections = nullptr;
	$ints* ctrl_connections = nullptr;
	::java::util::List* ctrl_connections_list = nullptr;
	static ::com::sun::media::sound::SoftPerformer$KeySortComparator* keySortComparator;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftPerformer_h_