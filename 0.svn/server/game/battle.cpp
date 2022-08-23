#find

		else if (pkVictim->IsRaceFlag(RACE_FLAG_TREE))
			iAtk += (iAtk * pkAttacker->GetPoint(POINT_ATTBONUS_TREE)) / 100;

#add after

#ifdef ENABLE_S_B_SYSTEM
		else if (pkVictim->IsRaceFlag(RACE_FLAG_STONE))
			iAtk += (iAtk * pkAttacker->GetPoint(POINT_ATTBONUS_STONE)) / 100;
		if (pkVictim->IsRaceFlag(RACE_FLAG_BOSS))
			iAtk += (iAtk * pkAttacker->GetPoint(POINT_ATTBONUS_BOSS)) / 100;
#endif