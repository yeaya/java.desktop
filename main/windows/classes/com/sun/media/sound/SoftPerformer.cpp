#include <com/sun/media/sound/SoftPerformer.h>

#include <com/sun/media/sound/ModelConnectionBlock.h>
#include <com/sun/media/sound/ModelDestination.h>
#include <com/sun/media/sound/ModelIdentifier.h>
#include <com/sun/media/sound/ModelOscillator.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/ModelSource.h>
#include <com/sun/media/sound/ModelStandardTransform.h>
#include <com/sun/media/sound/ModelTransform.h>
#include <com/sun/media/sound/SoftPerformer$1.h>
#include <com/sun/media/sound/SoftPerformer$2.h>
#include <com/sun/media/sound/SoftPerformer$KeySortComparator.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DESTINATION_FILTER_FREQ
#undef DESTINATION_GAIN
#undef DESTINATION_PITCH
#undef DIRECTION_MAX2MIN
#undef DIRECTION_MIN2MAX
#undef NEGATIVE_INFINITY
#undef POLARITY_BIPOLAR
#undef POLARITY_UNIPOLAR
#undef SOURCE_LFO1
#undef TRANSFORM_CONCAVE
#undef TRANSFORM_LINEAR
#undef TRANSFORM_SWITCH

using $ModelConnectionBlockArray = $Array<::com::sun::media::sound::ModelConnectionBlock>;
using $ModelOscillatorArray = $Array<::com::sun::media::sound::ModelOscillator>;
using $ModelSourceArray = $Array<::com::sun::media::sound::ModelSource>;
using $intArray2 = $Array<int32_t, 2>;
using $ModelConnectionBlock = ::com::sun::media::sound::ModelConnectionBlock;
using $ModelDestination = ::com::sun::media::sound::ModelDestination;
using $ModelIdentifier = ::com::sun::media::sound::ModelIdentifier;
using $ModelOscillator = ::com::sun::media::sound::ModelOscillator;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $ModelSource = ::com::sun::media::sound::ModelSource;
using $ModelStandardTransform = ::com::sun::media::sound::ModelStandardTransform;
using $ModelTransform = ::com::sun::media::sound::ModelTransform;
using $SoftPerformer$1 = ::com::sun::media::sound::SoftPerformer$1;
using $SoftPerformer$2 = ::com::sun::media::sound::SoftPerformer$2;
using $SoftPerformer$KeySortComparator = ::com::sun::media::sound::SoftPerformer$KeySortComparator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftPerformer_FieldInfo_[] = {
	{"defaultconnections", "[Lcom/sun/media/sound/ModelConnectionBlock;", nullptr, $STATIC, $staticField(SoftPerformer, defaultconnections)},
	{"keyFrom", "I", nullptr, $PUBLIC, $field(SoftPerformer, keyFrom)},
	{"keyTo", "I", nullptr, $PUBLIC, $field(SoftPerformer, keyTo)},
	{"velFrom", "I", nullptr, $PUBLIC, $field(SoftPerformer, velFrom)},
	{"velTo", "I", nullptr, $PUBLIC, $field(SoftPerformer, velTo)},
	{"exclusiveClass", "I", nullptr, $PUBLIC, $field(SoftPerformer, exclusiveClass)},
	{"selfNonExclusive", "Z", nullptr, $PUBLIC, $field(SoftPerformer, selfNonExclusive)},
	{"forcedVelocity", "Z", nullptr, $PUBLIC, $field(SoftPerformer, forcedVelocity)},
	{"forcedKeynumber", "Z", nullptr, $PUBLIC, $field(SoftPerformer, forcedKeynumber)},
	{"performer", "Lcom/sun/media/sound/ModelPerformer;", nullptr, $PUBLIC, $field(SoftPerformer, performer)},
	{"connections", "[Lcom/sun/media/sound/ModelConnectionBlock;", nullptr, $PUBLIC, $field(SoftPerformer, connections)},
	{"oscillators", "[Lcom/sun/media/sound/ModelOscillator;", nullptr, $PUBLIC, $field(SoftPerformer, oscillators)},
	{"midi_rpn_connections", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[I>;", $PUBLIC, $field(SoftPerformer, midi_rpn_connections)},
	{"midi_nrpn_connections", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[I>;", $PUBLIC, $field(SoftPerformer, midi_nrpn_connections)},
	{"midi_ctrl_connections", "[[I", nullptr, $PUBLIC, $field(SoftPerformer, midi_ctrl_connections)},
	{"midi_connections", "[[I", nullptr, $PUBLIC, $field(SoftPerformer, midi_connections)},
	{"ctrl_connections", "[I", nullptr, $PUBLIC, $field(SoftPerformer, ctrl_connections)},
	{"ctrl_connections_list", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(SoftPerformer, ctrl_connections_list)},
	{"keySortComparator", "Lcom/sun/media/sound/SoftPerformer$KeySortComparator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SoftPerformer, keySortComparator)},
	{}
};

$MethodInfo _SoftPerformer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/ModelPerformer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftPerformer::*)($ModelPerformer*)>(&SoftPerformer::init$))},
	{"extractKeys", "(Lcom/sun/media/sound/ModelConnectionBlock;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(SoftPerformer::*)($ModelConnectionBlock*)>(&SoftPerformer::extractKeys))},
	{"isUnnecessaryTransform", "(Lcom/sun/media/sound/ModelTransform;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ModelTransform*)>(&SoftPerformer::isUnnecessaryTransform))},
	{"processMidiControlSource", "(Lcom/sun/media/sound/ModelSource;I)V", nullptr, $PRIVATE, $method(static_cast<void(SoftPerformer::*)($ModelSource*,int32_t)>(&SoftPerformer::processMidiControlSource))},
	{"processMidiNrpnSource", "(Lcom/sun/media/sound/ModelSource;I)V", nullptr, $PRIVATE, $method(static_cast<void(SoftPerformer::*)($ModelSource*,int32_t)>(&SoftPerformer::processMidiNrpnSource))},
	{"processMidiRpnSource", "(Lcom/sun/media/sound/ModelSource;I)V", nullptr, $PRIVATE, $method(static_cast<void(SoftPerformer::*)($ModelSource*,int32_t)>(&SoftPerformer::processMidiRpnSource))},
	{"processMidiSource", "(Lcom/sun/media/sound/ModelSource;I)V", nullptr, $PRIVATE, $method(static_cast<void(SoftPerformer::*)($ModelSource*,int32_t)>(&SoftPerformer::processMidiSource))},
	{"processNoteOnSource", "(Lcom/sun/media/sound/ModelSource;I)V", nullptr, $PRIVATE, $method(static_cast<void(SoftPerformer::*)($ModelSource*,int32_t)>(&SoftPerformer::processNoteOnSource))},
	{"processSource", "(Lcom/sun/media/sound/ModelSource;I)V", nullptr, $PRIVATE, $method(static_cast<void(SoftPerformer::*)($ModelSource*,int32_t)>(&SoftPerformer::processSource))},
	{}
};

$InnerClassInfo _SoftPerformer_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftPerformer$KeySortComparator", "com.sun.media.sound.SoftPerformer", "KeySortComparator", $PRIVATE | $STATIC},
	{"com.sun.media.sound.SoftPerformer$2", nullptr, nullptr, 0},
	{"com.sun.media.sound.SoftPerformer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftPerformer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftPerformer",
	"java.lang.Object",
	nullptr,
	_SoftPerformer_FieldInfo_,
	_SoftPerformer_MethodInfo_,
	nullptr,
	nullptr,
	_SoftPerformer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftPerformer$KeySortComparator,com.sun.media.sound.SoftPerformer$2,com.sun.media.sound.SoftPerformer$1"
};

$Object* allocate$SoftPerformer($Class* clazz) {
	return $of($alloc(SoftPerformer));
}

$ModelConnectionBlockArray* SoftPerformer::defaultconnections = nullptr;
$SoftPerformer$KeySortComparator* SoftPerformer::keySortComparator = nullptr;

$String* SoftPerformer::extractKeys($ModelConnectionBlock* conn) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	if ($nc(conn)->getSources() != nullptr) {
		sb->append("["_s);
		$var($ModelSourceArray, srcs, conn->getSources());
		$var($ModelSourceArray, srcs2, $new($ModelSourceArray, $nc(srcs)->length));
		for (int32_t i = 0; i < srcs->length; ++i) {
			srcs2->set(i, srcs->get(i));
		}
		$Arrays::sort(srcs2, SoftPerformer::keySortComparator);
		for (int32_t i = 0; i < srcs->length; ++i) {
			sb->append($($of($nc(srcs->get(i))->getIdentifier())));
			sb->append(";"_s);
		}
		sb->append("]"_s);
	}
	sb->append(";"_s);
	if ($nc(conn)->getDestination() != nullptr) {
		sb->append($($of($nc($(conn->getDestination()))->getIdentifier())));
	}
	sb->append(";"_s);
	return sb->toString();
}

void SoftPerformer::processSource($ModelSource* src, int32_t ix) {
	$useLocalCurrentObjectStackCache();
	$var($ModelIdentifier, id, $nc(src)->getIdentifier());
	$var($String, o, $nc(id)->getObject());
	if ($nc(o)->equals("midi_cc"_s)) {
		processMidiControlSource(src, ix);
	} else if (o->equals("midi_rpn"_s)) {
		processMidiRpnSource(src, ix);
	} else if (o->equals("midi_nrpn"_s)) {
		processMidiNrpnSource(src, ix);
	} else if (o->equals("midi"_s)) {
		processMidiSource(src, ix);
	} else if (o->equals("noteon"_s)) {
		processNoteOnSource(src, ix);
	} else if (o->equals("osc"_s)) {
		return;
	} else if (o->equals("mixer"_s)) {
		return;
	} else {
		$nc(this->ctrl_connections_list)->add($($Integer::valueOf(ix)));
	}
}

void SoftPerformer::processMidiControlSource($ModelSource* src, int32_t ix) {
	$useLocalCurrentObjectStackCache();
	$var($String, v, $nc($($nc(src)->getIdentifier()))->getVariable());
	if (v == nullptr) {
		return;
	}
	int32_t c = $Integer::parseInt(v);
	if ($nc(this->midi_ctrl_connections)->get(c) == nullptr) {
		$nc(this->midi_ctrl_connections)->set(c, $$new($ints, {ix}));
	} else {
		$var($ints, olda, $nc(this->midi_ctrl_connections)->get(c));
		$var($ints, newa, $new($ints, $nc(olda)->length + 1));
		for (int32_t i = 0; i < olda->length; ++i) {
			newa->set(i, olda->get(i));
		}
		newa->set(newa->length - 1, ix);
		$nc(this->midi_ctrl_connections)->set(c, newa);
	}
}

void SoftPerformer::processNoteOnSource($ModelSource* src, int32_t ix) {
	$useLocalCurrentObjectStackCache();
	$var($String, v, $nc($($nc(src)->getIdentifier()))->getVariable());
	int32_t c = -1;
	if ($nc(v)->equals("on"_s)) {
		c = 3;
	}
	if ($nc(v)->equals("keynumber"_s)) {
		c = 4;
	}
	if (c == -1) {
		return;
	}
	if ($nc(this->midi_connections)->get(c) == nullptr) {
		$nc(this->midi_connections)->set(c, $$new($ints, {ix}));
	} else {
		$var($ints, olda, $nc(this->midi_connections)->get(c));
		$var($ints, newa, $new($ints, $nc(olda)->length + 1));
		for (int32_t i = 0; i < olda->length; ++i) {
			newa->set(i, olda->get(i));
		}
		newa->set(newa->length - 1, ix);
		$nc(this->midi_connections)->set(c, newa);
	}
}

void SoftPerformer::processMidiSource($ModelSource* src, int32_t ix) {
	$useLocalCurrentObjectStackCache();
	$var($String, v, $nc($($nc(src)->getIdentifier()))->getVariable());
	int32_t c = -1;
	if ($nc(v)->equals("pitch"_s)) {
		c = 0;
	}
	if ($nc(v)->equals("channel_pressure"_s)) {
		c = 1;
	}
	if ($nc(v)->equals("poly_pressure"_s)) {
		c = 2;
	}
	if (c == -1) {
		return;
	}
	if ($nc(this->midi_connections)->get(c) == nullptr) {
		$nc(this->midi_connections)->set(c, $$new($ints, {ix}));
	} else {
		$var($ints, olda, $nc(this->midi_connections)->get(c));
		$var($ints, newa, $new($ints, $nc(olda)->length + 1));
		for (int32_t i = 0; i < olda->length; ++i) {
			newa->set(i, olda->get(i));
		}
		newa->set(newa->length - 1, ix);
		$nc(this->midi_connections)->set(c, newa);
	}
}

void SoftPerformer::processMidiRpnSource($ModelSource* src, int32_t ix) {
	$useLocalCurrentObjectStackCache();
	$var($String, v, $nc($($nc(src)->getIdentifier()))->getVariable());
	if (v == nullptr) {
		return;
	}
	int32_t c = $Integer::parseInt(v);
	if ($nc(this->midi_rpn_connections)->get($($Integer::valueOf(c))) == nullptr) {
		$nc(this->midi_rpn_connections)->put($($Integer::valueOf(c)), $$new($ints, {ix}));
	} else {
		$var($ints, olda, $cast($ints, $nc(this->midi_rpn_connections)->get($($Integer::valueOf(c)))));
		$var($ints, newa, $new($ints, $nc(olda)->length + 1));
		for (int32_t i = 0; i < olda->length; ++i) {
			newa->set(i, olda->get(i));
		}
		newa->set(newa->length - 1, ix);
		$nc(this->midi_rpn_connections)->put($($Integer::valueOf(c)), newa);
	}
}

void SoftPerformer::processMidiNrpnSource($ModelSource* src, int32_t ix) {
	$useLocalCurrentObjectStackCache();
	$var($String, v, $nc($($nc(src)->getIdentifier()))->getVariable());
	if (v == nullptr) {
		return;
	}
	int32_t c = $Integer::parseInt(v);
	if ($nc(this->midi_nrpn_connections)->get($($Integer::valueOf(c))) == nullptr) {
		$nc(this->midi_nrpn_connections)->put($($Integer::valueOf(c)), $$new($ints, {ix}));
	} else {
		$var($ints, olda, $cast($ints, $nc(this->midi_nrpn_connections)->get($($Integer::valueOf(c)))));
		$var($ints, newa, $new($ints, $nc(olda)->length + 1));
		for (int32_t i = 0; i < olda->length; ++i) {
			newa->set(i, olda->get(i));
		}
		newa->set(newa->length - 1, ix);
		$nc(this->midi_nrpn_connections)->put($($Integer::valueOf(c)), newa);
	}
}

void SoftPerformer::init$($ModelPerformer* performer) {
	$useLocalCurrentObjectStackCache();
	this->keyFrom = 0;
	this->keyTo = 127;
	this->velFrom = 0;
	this->velTo = 127;
	this->exclusiveClass = 0;
	this->selfNonExclusive = false;
	this->forcedVelocity = false;
	this->forcedKeynumber = false;
	$set(this, midi_rpn_connections, $new($HashMap));
	$set(this, midi_nrpn_connections, $new($HashMap));
	$set(this, ctrl_connections_list, $new($ArrayList));
	$set(this, performer, performer);
	this->keyFrom = $nc(performer)->getKeyFrom();
	this->keyTo = performer->getKeyTo();
	this->velFrom = performer->getVelFrom();
	this->velTo = performer->getVelTo();
	this->exclusiveClass = performer->getExclusiveClass();
	this->selfNonExclusive = performer->isSelfNonExclusive();
	$var($Map, connmap, $new($HashMap));
	$var($List, performer_connections, $new($ArrayList));
	performer_connections->addAll($(performer->getConnectionBlocks()));
	if (performer->isDefaultConnectionsEnabled()) {
		bool isModulationWheelConectionFound = false;
		for (int32_t j = 0; j < performer_connections->size(); ++j) {
			$var($ModelConnectionBlock, connection, $cast($ModelConnectionBlock, performer_connections->get(j)));
			$var($ModelSourceArray, sources, $nc(connection)->getSources());
			$var($ModelDestination, dest, connection->getDestination());
			bool isModulationWheelConection = false;
			if (dest != nullptr && sources != nullptr && sources->length > 1) {
				for (int32_t i = 0; i < sources->length; ++i) {
					if ($nc($($nc($($nc(sources->get(i))->getIdentifier()))->getObject()))->equals("midi_cc"_s)) {
						if ($nc($($nc($($nc(sources->get(i))->getIdentifier()))->getVariable()))->equals("1"_s)) {
							isModulationWheelConection = true;
							isModulationWheelConectionFound = true;
							break;
						}
					}
				}
			}
			if (isModulationWheelConection) {
				$var($ModelConnectionBlock, newconnection, $new($ModelConnectionBlock));
				newconnection->setSources($(connection->getSources()));
				newconnection->setDestination($(connection->getDestination()));
				newconnection->addSource($$new($ModelSource, $$new($ModelIdentifier, "midi_rpn"_s, "5"_s)));
				newconnection->setScale(connection->getScale() * 256.0);
				performer_connections->set(j, newconnection);
			}
		}
		if (!isModulationWheelConectionFound) {
			$init($ModelSource);
			$var($ModelSource, var$0, $new($ModelSource, $ModelSource::SOURCE_LFO1, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
			$var($ModelSource, var$1, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "1"_s, 0), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
			$init($ModelDestination);
			$var($ModelConnectionBlock, conn, $new($ModelConnectionBlock, var$0, var$1, (double)50, $$new($ModelDestination, $ModelDestination::DESTINATION_PITCH)));
			conn->addSource($$new($ModelSource, $$new($ModelIdentifier, "midi_rpn"_s, "5"_s)));
			conn->setScale(conn->getScale() * 256.0);
			performer_connections->add(conn);
		}
		bool channel_pressure_set = false;
		bool poly_pressure = false;
		$var($ModelConnectionBlock, mod_cc_1_connection, nullptr);
		int32_t mod_cc_1_connection_src_ix = 0;
		{
			$var($Iterator, i$, performer_connections->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ModelConnectionBlock, connection, $cast($ModelConnectionBlock, i$->next()));
				{
					$var($ModelSourceArray, sources, $nc(connection)->getSources());
					$var($ModelDestination, dest, connection->getDestination());
					if (dest != nullptr && sources != nullptr) {
						for (int32_t i = 0; i < sources->length; ++i) {
							$var($ModelIdentifier, srcid, $nc(sources->get(i))->getIdentifier());
							if ($nc($($nc(srcid)->getObject()))->equals("midi_cc"_s)) {
								if ($nc($(srcid->getVariable()))->equals("1"_s)) {
									$assign(mod_cc_1_connection, connection);
									mod_cc_1_connection_src_ix = i;
								}
							}
							if ($nc($($nc(srcid)->getObject()))->equals("midi"_s)) {
								if ($nc($(srcid->getVariable()))->equals("channel_pressure"_s)) {
									channel_pressure_set = true;
								}
								if ($nc($(srcid->getVariable()))->equals("poly_pressure"_s)) {
									poly_pressure = true;
								}
							}
						}
					}
				}
			}
		}
		if (mod_cc_1_connection != nullptr) {
			if (!channel_pressure_set) {
				$var($ModelConnectionBlock, mc, $new($ModelConnectionBlock));
				mc->setDestination($(mod_cc_1_connection->getDestination()));
				mc->setScale(mod_cc_1_connection->getScale());
				$var($ModelSourceArray, src_list, mod_cc_1_connection->getSources());
				$var($ModelSourceArray, src_list_new, $new($ModelSourceArray, $nc(src_list)->length));
				for (int32_t i = 0; i < src_list_new->length; ++i) {
					src_list_new->set(i, src_list->get(i));
				}
				src_list_new->set(mod_cc_1_connection_src_ix, $$new($ModelSource, $$new($ModelIdentifier, "midi"_s, "channel_pressure"_s)));
				mc->setSources(src_list_new);
				connmap->put($(extractKeys(mc)), mc);
			}
			if (!poly_pressure) {
				$var($ModelConnectionBlock, mc, $new($ModelConnectionBlock));
				mc->setDestination($(mod_cc_1_connection->getDestination()));
				mc->setScale(mod_cc_1_connection->getScale());
				$var($ModelSourceArray, src_list, mod_cc_1_connection->getSources());
				$var($ModelSourceArray, src_list_new, $new($ModelSourceArray, $nc(src_list)->length));
				for (int32_t i = 0; i < src_list_new->length; ++i) {
					src_list_new->set(i, src_list->get(i));
				}
				src_list_new->set(mod_cc_1_connection_src_ix, $$new($ModelSource, $$new($ModelIdentifier, "midi"_s, "poly_pressure"_s)));
				mc->setSources(src_list_new);
				connmap->put($(extractKeys(mc)), mc);
			}
		}
		$var($ModelConnectionBlock, found_vib_connection, nullptr);
		{
			$var($Iterator, i$, performer_connections->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ModelConnectionBlock, connection, $cast($ModelConnectionBlock, i$->next()));
				{
					$var($ModelSourceArray, sources, $nc(connection)->getSources());
					if ($nc(sources)->length != 0 && $nc($($nc($($nc(sources->get(0))->getIdentifier()))->getObject()))->equals("lfo"_s)) {
						$init($ModelDestination);
						if ($nc($($nc($(connection->getDestination()))->getIdentifier()))->equals($ModelDestination::DESTINATION_PITCH)) {
							if (found_vib_connection == nullptr) {
								$assign(found_vib_connection, connection);
							} else if ($nc($($nc(found_vib_connection)->getSources()))->length > sources->length) {
								$assign(found_vib_connection, connection);
							} else if ($nc($($nc($nc($(found_vib_connection->getSources()))->get(0))->getIdentifier()))->getInstance() < 1) {
								int32_t var$2 = $nc($($nc($nc($(found_vib_connection->getSources()))->get(0))->getIdentifier()))->getInstance();
								if (var$2 > $nc($($nc(sources->get(0))->getIdentifier()))->getInstance()) {
									$assign(found_vib_connection, connection);
								}
							}
						}
					}
				}
			}
		}
		int32_t instance = 1;
		if (found_vib_connection != nullptr) {
			instance = $nc($($nc($nc($(found_vib_connection->getSources()))->get(0))->getIdentifier()))->getInstance();
		}
		$var($ModelConnectionBlock, connection, nullptr);
		$var($ModelSource, var$3, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "78"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$assign(connection, $new($ModelConnectionBlock, var$3, (double)2000, $$new($ModelDestination, $$new($ModelIdentifier, "lfo"_s, "delay2"_s, instance))));
		connmap->put($(extractKeys(connection)), connection);
		double scale = found_vib_connection == nullptr ? (double)0 : $nc(found_vib_connection)->getScale();
		$var($ModelSource, var$4, $new($ModelSource, $$new($ModelIdentifier, "lfo"_s, instance)));
		$var($ModelIdentifier, var$6, $new($ModelIdentifier, "midi_cc"_s, "77"_s));
		$var($ModelSource, var$5, $new($ModelSource, var$6, static_cast<$ModelTransform*>($$new($SoftPerformer$2, this, scale))));
		$init($ModelDestination);
		$assign(connection, $new($ModelConnectionBlock, var$4, var$5, $$new($ModelDestination, $ModelDestination::DESTINATION_PITCH)));
		connmap->put($(extractKeys(connection)), connection);
		$var($ModelSource, var$7, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "76"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$assign(connection, $new($ModelConnectionBlock, var$7, (double)2400, $$new($ModelDestination, $$new($ModelIdentifier, "lfo"_s, "freq"_s, instance))));
		connmap->put($(extractKeys(connection)), connection);
	}
	if (performer->isDefaultConnectionsEnabled()) {
		{
			$var($ModelConnectionBlockArray, arr$, SoftPerformer::defaultconnections);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ModelConnectionBlock, connection, arr$->get(i$));
				connmap->put($(extractKeys(connection)), connection);
			}
		}
	}
	{
		$var($Iterator, i$, performer_connections->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModelConnectionBlock, connection, $cast($ModelConnectionBlock, i$->next()));
			connmap->put($(extractKeys(connection)), connection);
		}
	}
	$var($List, connections, $new($ArrayList));
	$set(this, midi_ctrl_connections, $new($intArray2, 128));
	for (int32_t i = 0; i < $nc(this->midi_ctrl_connections)->length; ++i) {
		$nc(this->midi_ctrl_connections)->set(i, nullptr);
	}
	$set(this, midi_connections, $new($intArray2, 5));
	for (int32_t i = 0; i < $nc(this->midi_connections)->length; ++i) {
		$nc(this->midi_connections)->set(i, nullptr);
	}
	int32_t ix = 0;
	bool mustBeOnTop = false;
	{
		$var($Iterator, i$, $nc($(connmap->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModelConnectionBlock, connection, $cast($ModelConnectionBlock, i$->next()));
			{
				if ($nc(connection)->getDestination() != nullptr) {
					$var($ModelDestination, dest, connection->getDestination());
					$var($ModelIdentifier, id, $nc(dest)->getIdentifier());
					if ($nc($($nc(id)->getObject()))->equals("noteon"_s)) {
						mustBeOnTop = true;
						if ($nc($(id->getVariable()))->equals("keynumber"_s)) {
							this->forcedKeynumber = true;
						}
						if ($nc($(id->getVariable()))->equals("velocity"_s)) {
							this->forcedVelocity = true;
						}
					}
				}
				if (mustBeOnTop) {
					connections->add(0, connection);
					mustBeOnTop = false;
				} else {
					connections->add(connection);
				}
			}
		}
	}
	{
		$var($Iterator, i$, connections->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModelConnectionBlock, connection, $cast($ModelConnectionBlock, i$->next()));
			{
				if ($nc(connection)->getSources() != nullptr) {
					$var($ModelSourceArray, srcs, connection->getSources());
					for (int32_t i = 0; i < $nc(srcs)->length; ++i) {
						processSource(srcs->get(i), ix);
					}
				}
				++ix;
			}
		}
	}
	$set(this, connections, $new($ModelConnectionBlockArray, connections->size()));
	connections->toArray(this->connections);
	$set(this, ctrl_connections, $new($ints, $nc(this->ctrl_connections_list)->size()));
	for (int32_t i = 0; i < $nc(this->ctrl_connections)->length; ++i) {
		$nc(this->ctrl_connections)->set(i, $nc(($cast($Integer, $($nc(this->ctrl_connections_list)->get(i)))))->intValue());
	}
	$set(this, oscillators, $new($ModelOscillatorArray, $nc($(performer->getOscillators()))->size()));
	$nc($(performer->getOscillators()))->toArray(this->oscillators);
	{
		$var($Iterator, i$, connections->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModelConnectionBlock, conn, $cast($ModelConnectionBlock, i$->next()));
			{
				if ($nc(conn)->getDestination() != nullptr) {
					if (isUnnecessaryTransform($($nc($(conn->getDestination()))->getTransform()))) {
						$nc($(conn->getDestination()))->setTransform(nullptr);
					}
				}
				if ($nc(conn)->getSources() != nullptr) {
					{
						$var($ModelSourceArray, arr$, conn->getSources());
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($ModelSource, src, arr$->get(i$));
							{
								if (isUnnecessaryTransform($($nc(src)->getTransform()))) {
									$nc(src)->setTransform(nullptr);
								}
							}
						}
					}
				}
			}
		}
	}
}

bool SoftPerformer::isUnnecessaryTransform($ModelTransform* transform) {
	$init(SoftPerformer);
	if (transform == nullptr) {
		return false;
	}
	if (!($instanceOf($ModelStandardTransform, transform))) {
		return false;
	}
	$var($ModelStandardTransform, stransform, $cast($ModelStandardTransform, transform));
	if ($nc(stransform)->getDirection() != $ModelStandardTransform::DIRECTION_MIN2MAX) {
		return false;
	}
	if ($nc(stransform)->getPolarity() != $ModelStandardTransform::POLARITY_UNIPOLAR) {
		return false;
	}
	if ($nc(stransform)->getTransform() != $ModelStandardTransform::TRANSFORM_LINEAR) {
		return false;
	}
	return false;
}

void clinit$SoftPerformer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(SoftPerformer::defaultconnections, $new($ModelConnectionBlockArray, 42));
	{
		int32_t o = 0;
		$var($ModelSource, var$0, $new($ModelSource, $$new($ModelIdentifier, "noteon"_s, "on"_s, 0), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$0, (double)1, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "on"_s, 0))));
		$var($ModelSource, var$1, $new($ModelSource, $$new($ModelIdentifier, "noteon"_s, "on"_s, 0), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$1, (double)1, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "on"_s, 1))));
		$var($ModelSource, var$2, $new($ModelSource, $$new($ModelIdentifier, "eg"_s, "active"_s, 0), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$2, (double)1, $$new($ModelDestination, $$new($ModelIdentifier, "mixer"_s, "active"_s, 0))));
		$var($ModelSource, var$3, $new($ModelSource, $$new($ModelIdentifier, "eg"_s, 0), $ModelStandardTransform::DIRECTION_MAX2MIN, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$3, (double)-960, $$new($ModelDestination, $$new($ModelIdentifier, "mixer"_s, "gain"_s))));
		$var($ModelSource, var$4, $new($ModelSource, $$new($ModelIdentifier, "noteon"_s, "velocity"_s), $ModelStandardTransform::DIRECTION_MAX2MIN, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_CONCAVE));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$4, (double)-960, $$new($ModelDestination, $$new($ModelIdentifier, "mixer"_s, "gain"_s))));
		$var($ModelSource, var$5, $new($ModelSource, $$new($ModelIdentifier, "midi"_s, "pitch"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$var($ModelIdentifier, var$7, $new($ModelIdentifier, "midi_rpn"_s, "0"_s));
		$var($ModelSource, var$6, $new($ModelSource, var$7, static_cast<$ModelTransform*>($$new($SoftPerformer$1))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$5, var$6, $$new($ModelDestination, $$new($ModelIdentifier, "osc"_s, "pitch"_s))));
		$var($ModelSource, var$8, $new($ModelSource, $$new($ModelIdentifier, "noteon"_s, "keynumber"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$8, (double)12800, $$new($ModelDestination, $$new($ModelIdentifier, "osc"_s, "pitch"_s))));
		$var($ModelSource, var$9, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "7"_s), $ModelStandardTransform::DIRECTION_MAX2MIN, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_CONCAVE));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$9, (double)-960, $$new($ModelDestination, $$new($ModelIdentifier, "mixer"_s, "gain"_s))));
		$var($ModelSource, var$10, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "8"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$10, (double)1000, $$new($ModelDestination, $$new($ModelIdentifier, "mixer"_s, "balance"_s))));
		$var($ModelSource, var$11, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "10"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$11, (double)1000, $$new($ModelDestination, $$new($ModelIdentifier, "mixer"_s, "pan"_s))));
		$var($ModelSource, var$12, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "11"_s), $ModelStandardTransform::DIRECTION_MAX2MIN, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_CONCAVE));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$12, (double)-960, $$new($ModelDestination, $$new($ModelIdentifier, "mixer"_s, "gain"_s))));
		$var($ModelSource, var$13, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "91"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$13, (double)1000, $$new($ModelDestination, $$new($ModelIdentifier, "mixer"_s, "reverb"_s))));
		$var($ModelSource, var$14, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "93"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$14, (double)1000, $$new($ModelDestination, $$new($ModelIdentifier, "mixer"_s, "chorus"_s))));
		$var($ModelSource, var$15, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "71"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$15, (double)200, $$new($ModelDestination, $$new($ModelIdentifier, "filter"_s, "q"_s))));
		$var($ModelSource, var$16, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "74"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$16, (double)9600, $$new($ModelDestination, $$new($ModelIdentifier, "filter"_s, "freq"_s))));
		$var($ModelSource, var$17, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "72"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$17, (double)6000, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "release2"_s))));
		$var($ModelSource, var$18, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "73"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$18, (double)2000, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "attack2"_s))));
		$var($ModelSource, var$19, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "75"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$19, (double)6000, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "decay2"_s))));
		$var($ModelSource, var$20, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "67"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_SWITCH));
		$init($ModelDestination);
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$20, (double)-50, $$new($ModelDestination, $ModelDestination::DESTINATION_GAIN)));
		$var($ModelSource, var$21, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "67"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_SWITCH));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$21, (double)-2400, $$new($ModelDestination, $ModelDestination::DESTINATION_FILTER_FREQ)));
		$var($ModelSource, var$22, $new($ModelSource, $$new($ModelIdentifier, "midi_rpn"_s, "1"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$22, (double)100, $$new($ModelDestination, $$new($ModelIdentifier, "osc"_s, "pitch"_s))));
		$var($ModelSource, var$23, $new($ModelSource, $$new($ModelIdentifier, "midi_rpn"_s, "2"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$23, (double)12800, $$new($ModelDestination, $$new($ModelIdentifier, "osc"_s, "pitch"_s))));
		$var($ModelSource, var$24, $new($ModelSource, $$new($ModelIdentifier, "master"_s, "fine_tuning"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$24, (double)100, $$new($ModelDestination, $$new($ModelIdentifier, "osc"_s, "pitch"_s))));
		$var($ModelSource, var$25, $new($ModelSource, $$new($ModelIdentifier, "master"_s, "coarse_tuning"_s), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$25, (double)12800, $$new($ModelDestination, $$new($ModelIdentifier, "osc"_s, "pitch"_s))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)13500, $$new($ModelDestination, $$new($ModelIdentifier, "filter"_s, "freq"_s, 0))));
		$init($Float);
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "delay"_s, 0))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "attack"_s, 0))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "hold"_s, 0))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "decay"_s, 0))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)1000, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "sustain"_s, 0))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "release"_s, 0))));
		double var$27 = 1200.0 * $Math::log(0.015);
		double var$26 = var$27 / $Math::log((double)2);
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, var$26, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "shutdown"_s, 0))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "delay"_s, 1))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "attack"_s, 1))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "hold"_s, 1))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "decay"_s, 1))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)1000, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "sustain"_s, 1))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "eg"_s, "release"_s, 1))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, -8.51318, $$new($ModelDestination, $$new($ModelIdentifier, "lfo"_s, "freq"_s, 0))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "lfo"_s, "delay"_s, 0))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, -8.51318, $$new($ModelDestination, $$new($ModelIdentifier, "lfo"_s, "freq"_s, 1))));
		$nc(SoftPerformer::defaultconnections)->set(o++, $$new($ModelConnectionBlock, (double)$Float::NEGATIVE_INFINITY, $$new($ModelDestination, $$new($ModelIdentifier, "lfo"_s, "delay"_s, 1))));
	}
	$assignStatic(SoftPerformer::keySortComparator, $new($SoftPerformer$KeySortComparator));
}

SoftPerformer::SoftPerformer() {
}

$Class* SoftPerformer::load$($String* name, bool initialize) {
	$loadClass(SoftPerformer, name, initialize, &_SoftPerformer_ClassInfo_, clinit$SoftPerformer, allocate$SoftPerformer);
	return class$;
}

$Class* SoftPerformer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com