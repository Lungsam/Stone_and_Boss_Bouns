#find

			SetPoint(type, GetPoint(type) + amount);
			val = GetPoint(type);
			break;

		case POINT_MALL_ATTBONUS:

#Before

			SetPoint(type, GetPoint(type) + amount);

#add 

#ifdef ENABLE_S_B_SYSTEM
		case POINT_ATTBONUS_STONE:
		case POINT_ATTBONUS_BOSS:
#endif


#its be like
	

#ifdef ENABLE_S_B_SYSTEM
		case POINT_ATTBONUS_STONE:
		case POINT_ATTBONUS_BOSS:
#endif
			SetPoint(type, GetPoint(type) + amount);
			val = GetPoint(type);
			break;

#find

			PointChange(aApplyInfo[bApplyType].bPointType, iVal);
			break;

##Before add

#ifdef ENABLE_S_B_SYSTEM
		case APPLY_ATTBONUS_STONE:
		case APPLY_ATTBONUS_BOSS:
#endif