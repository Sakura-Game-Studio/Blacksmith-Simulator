using UnityEngine;

public class SpawnObjectsFromComputer : MonoBehaviour {
    public Computer computer;
    public Transform positionSpawn;
    private GameObject prefab;

    public void SpawnObjectFromComputer() {
        prefab = computer.GetPrefab();
        Instantiate(prefab, positionSpawn);
    }
}
