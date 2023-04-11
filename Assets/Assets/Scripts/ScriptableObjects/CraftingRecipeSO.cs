using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class CraftingRecipeSO : ScriptableObject {
    public Sprite recipeSprite;
    public List<ItemSO> itensSOList;
    public ItemSO outputItemSO;
    public int totalHits;
}
