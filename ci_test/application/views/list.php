<?php include 'header.php' ?>
<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	
</head>
<body>
	<div class="container">
		<h2 class="m-2"> View Users </h2>
		<div style="margin-left: 80%;"> 
				<?=anchor('user_controller/add_user','Add-User', ['class'=>'btn btn-success']);?>
		</div>
	
		<table class="table">
	  		<thead>
	    		<tr>
	      			<th scope="col">No</th>
	      			<th scope="col">Name</th>
	     			<th scope="col">Address</th>
	     			<th scope="col">Mobile No </th>
	     			<th></th>
	     			<th></th>
	   			</tr>
	 		</thead>
	 		<tbody>
	 			<?php if(!empty($users)) { 
	 				foreach ($users as $user) { ?>

				    <tr>
				      <th scope="row"><?php echo $user['id'] ?> </th>
				      <td> <?php echo $user['name'] ?> </td>
				      <td> <?php echo $user['addr'] ?>  </td>
				      <td> <?php echo $user['mno'] ?> </td>
				      <td> <?=anchor("user_controller/update/{$user['id']}",'Update', ['class'=>'btn btn-primary']);?>  </td>
				       <td> <?=anchor("user_controller/delete/{$user['id']}",'Delete', ['class'=>'btn btn-danger']);?>  </td>
				    </tr>
				<?php } } else { ?>
					<tr>
						<th colspan="5"> Record not found...</th>
					</tr>
				<?php } ?>
			</tbody>
		</table>

	</div>	
</body>
</html>