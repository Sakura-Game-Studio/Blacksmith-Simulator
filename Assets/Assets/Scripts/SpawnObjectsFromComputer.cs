using UnityEngine;

public class SpawnObjectsFromComputer : MonoBehaviour {
    public Computer computer;
    public Transform positionSpawn;
    private GameObject prefab;

    public void SpawnObjectFromComputer() {
        prefab = computer.GetPrefab();
        Vector3 posicao = positionSpawn.position;
        Instantiate(prefab, posicao, Quaternion.identity);
    }
}
